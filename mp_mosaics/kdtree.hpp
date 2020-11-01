/**
 * @file kdtree.cpp
 * Implementation of KDTree class.
 */

#include <utility>
#include <algorithm>

using namespace std;

template <int Dim>
bool KDTree<Dim>::smallerDimVal(const Point<Dim>& first,
                                const Point<Dim>& second, int curDim) const
{
    /**
     * @todo Implement this function!
     */
    if (first[curDim] == second[curDim]) {
      return first < second;
    } else if (first[curDim] < second[curDim]) {
      return true;
    } else {
      return false;
    }
}

template <int Dim>
bool KDTree<Dim>::shouldReplace(const Point<Dim>& target,
                                const Point<Dim>& currentBest,
                                const Point<Dim>& potential) const
{
    /**
     * @todo Implement this function!
     */
    unsigned potDSqr = 0;
    for (unsigned j = 0; j < Dim; ++j) {
      potDSqr = potDSqr + ((target[j] - potential[j]) * (target[j] - potential[j]));
    }
    unsigned currDSqr = 0;
    for (unsigned i = 0; i < Dim; ++i) {
      currDSqr = currDSqr + ((target[i] - currentBest[i]) * (target[i] - currentBest[i]));
    }
    if (potDSqr == currDSqr) {
      return potential < currentBest;
    } else if (currDSqr < potDSqr) {
      return false;
    } else {
      return true;
    }
}


template <int Dim>
unsigned KDTree<Dim>::partition(unsigned l, unsigned r, unsigned dim, unsigned pivot) {
  Point<Dim> pv = vec[pivot];
  swap(vec[r], vec[pivot]);
  unsigned sI = l;
  for (unsigned j = l; j < r; ++j) {
    if (smallerDimVal(vec[j], pv, dim)) {
      swap(vec[j], vec[sI]);
      ++sI;
    }
  }
  swap(vec[sI], vec[r]);
  return sI;
}


template <int Dim>
void KDTree<Dim>::quickSelect(unsigned l, unsigned r, unsigned d, unsigned m) {
  if (l >= r) {
    return;
  }
  unsigned p = partition(l, r, d, std::floor((l + r) / 2));
  if (p < m) {
    quickSelect(p + 1, r, d, m);
  } else if (p > m) {
    quickSelect(l, p - 1, d, m);
  } else {
    return;
  }




}
template <int Dim>
typename KDTree<Dim>::KDTreeNode * KDTree<Dim>::constructhp(unsigned l, unsigned r, unsigned cd) {
  if (l > r || r >= vec.size() || l < 0) {
    return NULL;
  }
  if (l == r) {
    return new KDTreeNode (vec[l]);
  }
  quickSelect(l, r, cd, std::floor((l + r) / 2));
  KDTreeNode * cr = new KDTreeNode(vec[std::floor((l + r) / 2)]);
  cr->left = constructhp(l, std::floor(((l + r) / 2)) - 1, (cd + 1) % Dim);
  cr->right = constructhp(std::floor(((l + r) / 2)) + 1, r, (cd + 1) % Dim);
  return cr;
}

template <int Dim>
KDTree<Dim>::KDTree(const vector<Point<Dim>>& newPoints)
{
    /**
     * @todo Implement this function!
     */
    size = newPoints.size();
    if (newPoints.empty()) {
      root = NULL;
    } else {
      for (unsigned j = 0; j < size; ++j) {
        vec.push_back(newPoints[j]);
      }
      root = constructhp(0, size - 1, 0);
    }
}

template <int Dim>
KDTree<Dim>::KDTree(const KDTree<Dim>& other) {
  /**
   * @todo Implement this function!
   */
  this = new KDTree(other.vec);
}

template <int Dim>
void KDTree<Dim>::destroyer(KDTreeNode* root) {
  if (root == NULL) {
    return;
  }
  destroyer(root->right);
  destroyer(root->left);
  delete root;
  root = NULL;
}

template <int Dim>
const KDTree<Dim>& KDTree<Dim>::operator=(const KDTree<Dim>& rhs) {
  /**
   * @todo Implement this function!
   */
  if (*this != rhs) {
    for (size_t j = 0; j < size; ++j) {
      this->vec.pop_back();
    }
    this->size = 0;
    destroyer(this->root);
    this = new KDTree(rhs.vec);
  }
  return *this;
}

template <int Dim>
KDTree<Dim>::~KDTree() {
  /**
   * @todo Implement this function!
   */
  for (size_t j = 0; j < size; ++j) {
    vec.pop_back();
  }
  size = 0;
  destroyer(root);
}

template <int Dim>
double KDTree<Dim>::hDisSqr(Point<Dim> fst, Point<Dim> sec) const {
  double hdissqr = 0;
  for (unsigned j = 0; j < Dim; ++j) {
    hdissqr = hdissqr + (fst[j] - sec[j]) * (fst[j] - sec[j]);
  }
  return hdissqr;
}

template <int Dim>
Point<Dim> KDTree<Dim>::nearestHelper(KDTreeNode* root, unsigned curDim, Point<Dim> query) const{
  if (root->left == NULL && root->right == NULL) {
    return root->point;
  }
  Point<Dim> currBest = root->point;
  Point<Dim> potCandidate = currBest;
  if (query[curDim] < root->point[curDim] && root->left != NULL) {
    currBest = nearestHelper(root->left, (curDim + 1) % Dim, query);
  } else if (query[curDim] > root->point[curDim] && root->right != NULL) {
    currBest = nearestHelper(root->right, (1 + curDim) % Dim, query);
  } else if (smallerDimVal(query, root->point, curDim) && root->left != NULL) {
    currBest = nearestHelper(root->left, (curDim + 1) % Dim, query);
  } else if (!smallerDimVal(query, root->point, curDim) && root->right != NULL) {
    currBest = nearestHelper(root->right, (1 + curDim) % Dim, query);
  }
  if (shouldReplace(query, currBest, potCandidate)) {
    currBest = potCandidate;
  }
  double curRadSqr = hDisSqr(currBest, query);
  if (curRadSqr >= (root->point[curDim] - query[curDim]) * (root->point[curDim] - query[curDim])) {
    if (smallerDimVal(query, currBest, curDim) && root->right != NULL) {
      potCandidate = nearestHelper(root->right, (1 + curDim) % Dim, query);
      if (shouldReplace(query, currBest, potCandidate)) {
        currBest = potCandidate;
      }
    } else if (!smallerDimVal(query, currBest, curDim) && root->left != NULL) {
      potCandidate = nearestHelper(root->left, (1 + curDim) % Dim, query);
      if (shouldReplace(query, currBest, potCandidate)) {
        currBest = potCandidate;
      }
    }
  }
  return currBest;
}

template <int Dim>
Point<Dim> KDTree<Dim>::findNearestNeighbor(const Point<Dim>& query) const
{
    /**
     * @todo Implement this function!
     */
    return nearestHelper(root, 0, query);
}

