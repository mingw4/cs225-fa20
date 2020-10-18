/**
 * @file avltree.cpp
 * Definitions of the binary tree functions you'll be writing for this lab.
 * You'll need to modify this file.
 */

template <class K, class V>
V AVLTree<K, V>::find(const K& key) const
{
    return find(root, key);
}

template <class K, class V>
V AVLTree<K, V>::find(Node* subtree, const K& key) const
{
    if (subtree == NULL)
        return V();
    else if (key == subtree->key)
        return subtree->value;
    else {
        if (key < subtree->key)
            return find(subtree->left, key);
        else
            return find(subtree->right, key);
    }
}

template <class K, class V>
void AVLTree<K, V>::rotateLeft(Node*& t)
{
    functionCalls.push_back("rotateLeft"); // Stores the rotation name (don't remove this)
    // your code here
    Node*& r1 = t;
    Node * p1 = t;
    Node*& r2 = t->right;
    Node * p2 = t->right;
    Node*& r3 = t->right->left;
    Node * p3 = t->right->left;
    r1 = p2;
    r2 = p3;
    r3 = p1;
    p1->height = std::max(heightOrNeg1(p1->left), heightOrNeg1(p1->right)) + 1;
    p2->height = std::max(heightOrNeg1(p2->left), heightOrNeg1(p2->right)) + 1;
}

template <class K, class V>
void AVLTree<K, V>::rotateLeftRight(Node*& t)
{
    functionCalls.push_back("rotateLeftRight"); // Stores the rotation name (don't remove this)
    // Implemented for you:
    rotateLeft(t->left);
    rotateRight(t);
}

template <class K, class V>
void AVLTree<K, V>::rotateRight(Node*& t)
{
    functionCalls.push_back("rotateRight"); // Stores the rotation name (don't remove this)
    // your code here
    Node*& r1 = t;
    Node * p1 = t;
    Node*& r2 = t->left;
    Node * p2 = t->left;
    Node*& r3 = t->left->right;
    Node * p3 = t->left->right;
    r1 = p2;
    r2 = p3;
    r3 = p1;
    p1->height = std::max(heightOrNeg1(p1->left), heightOrNeg1(p1->right)) + 1;
    p2->height = std::max(heightOrNeg1(p2->left), heightOrNeg1(p2->right)) + 1;
}

template <class K, class V>
void AVLTree<K, V>::rotateRightLeft(Node*& t)
{
    functionCalls.push_back("rotateRightLeft"); // Stores the rotation name (don't remove this)
    // your code here
    rotateRight(t->right);
    rotateLeft(t);
}

template <class K, class V>
void AVLTree<K, V>::rebalance(Node*& subtree)
{
    // your code here
    if (subtree == NULL) {
        return;
    }
    int b = heightOrNeg1(subtree->right) - heightOrNeg1(subtree->left);
    if (b == -2) {
        int lb = heightOrNeg1(subtree->left->right) - heightOrNeg1(subtree->left->left);
        if (lb == -1) {
            rotateRight(subtree);
        } else {
            rotateLeftRight(subtree);
        }
    } else if (b == 2) {
        int rb = heightOrNeg1(subtree->right->right) - heightOrNeg1(subtree->left->left);
        if (rb == 1) {
            rotateLeft(subtree);
        } else {
            rotateRightLeft(subtree);
        }
    }
    subtree->height = std::max(heightOrNeg1(subtree->left), heightOrNeg1(subtree->right)) + 1;
}

template <class K, class V>
void AVLTree<K, V>::insert(const K & key, const V & value)
{
    insert(root, key, value);
}

template <class K, class V>
void AVLTree<K, V>::insert(Node*& subtree, const K& key, const V& value)
{
    // your code here
    if (subtree == NULL) {
        subtree = new Node(key, value);
    } else if (key < subtree->key) {
        insert(subtree->left, key, value);
    } else if (key > subtree->key) {
        insert(subtree->right, key, value);
    }
    rebalance(subtree);
}

template <class K, class V>
void AVLTree<K, V>::remove(const K& key)
{
    remove(root, key);
}

template <class K, class V>
void AVLTree<K, V>::remove(Node*& subtree, const K& key)
{
    if (subtree == NULL)
        return;

    if (key < subtree->key) {
        // your code here
        remove(subtree->left, key);
    } else if (key > subtree->key) {
        // your code here
        remove(subtree->right, key);
    } else {
        if (subtree->left == NULL && subtree->right == NULL) {
            /* no-child remove */
            // your code here
            delete subtree;
            subtree = NULL;
        } else if (subtree->left != NULL && subtree->right != NULL) {
            /* two-child remove */
            // your code here
            Node * curr = subtree->left;
            while (curr->right != NULL) {
                curr = curr->left;
            }
            subtree->key = curr->key;
            remove(subtree->left, curr->key);
        } else {
            /* one-child remove */
            // your code here
            if (subtree->left != NULL) {
                Node * temp = subtree->left;
                delete subtree;
                subtree = temp;
            } else {
                Node * temp = subtree->right;
                delete subtree;
                subtree = temp;
            }
        }
        // your code here
        rebalance(subtree);
    }
}
