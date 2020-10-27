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
    for (unsigned j = 0; j < Dim; j++) {
      potDSqr = potDSqr + ((target[j] - potential[j]) * (target[j] - potential[j]));
    }
    unsigned currDSqr = 0;
    for (unsigned i = 0; i < Dim; i++) {
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
  swap(vec[r], vec[pivot]);
  for (unsigned j = l; j < r; ++j) {
    if (smallerDimVal(vec[j], vec[pivot], dim)) {
      swap(vec[j], vec[l]);
      ++l;
    }
  }
  swap(vec[l], vec[r]);
  return l;
}


template <int Dim>
void KDTree<Dim>::quickSelect(unsigned l, unsigned r, unsigned dim, unsigned pivot) {
  if (l >= r) {
    return;
  }
  unsigned i = partition(l, r, pivot, dim);
  if (i < pivot) {
    return quickSelect(l + 1, r, i, dim);
  }
  if (i > pivot) {
    return quickSelect(l, r - 1, i, dim);
  }
}



template <int Dim>
KDTree<Dim>::KDTree(const vector<Point<Dim>>& newPoints)
{
    /**
     * @todo Implement this function!
     */
    if (newPoints.empty()) {
      root = NULL;
    } else {
      for (unsigned j = 0; j < newPoints.size(); ++j) {
        vec.push_back(newPoints[j]);
      }
      
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
Point<Dim> KDTree<Dim>::findNearestNeighbor(const Point<Dim>& query) const
{
    /**
     * @todo Implement this function!
     */

    return Point<Dim>();
}

