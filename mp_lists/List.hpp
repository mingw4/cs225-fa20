/**
 * @file list.cpp
 * Doubly Linked List (MP 3).
 */

template <class T>
List<T>::List() { 
  // @TODO: graded in MP3.1
    head_ = NULL;
    tail_ = NULL;
    length_ = 0;
}

/**
 * Returns a ListIterator with a position at the beginning of
 * the List.
 */
template <typename T>
typename List<T>::ListIterator List<T>::begin() const {
  // @TODO: graded in MP3.1
  return List<T>::ListIterator(head_);
}

/**
 * Returns a ListIterator one past the end of the List.
 */
template <typename T>
typename List<T>::ListIterator List<T>::end() const {
  // @TODO: graded in MP3.1
  return List<T>::ListIterator(NULL);
}


/**
 * Destroys all dynamically allocated memory associated with the current
 * List class.
 */
template <typename T>
void List<T>::_destroy() {
  /// @todo Graded in MP3.1
  if (length_ == 0) {
    return;
  } else if (length_ == 1) {
    delete head_;
  } else {
    unsigned length = length_;
    ListNode * cur = head_;
    ListNode * curNext = head_;
    for (unsigned i = 0; i < length - 1; i++) {
      curNext = cur->next;
      delete cur;
      cur = curNext;
    }
    tail_ = NULL;
  }
}

/**
 * Inserts a new node at the front of the List.
 * This function **SHOULD** create a new ListNode.
 *
 * @param ndata The data to be inserted.
 */
template <typename T>
void List<T>::insertFront(T const & ndata) {
  /// @todo Graded in MP3.1
  ListNode * newNode = new ListNode(ndata);
  if (length_ == 0) {
    newNode->next = NULL;
    newNode->prev = NULL;
    head_ = newNode;
    tail_ = newNode;
  } else {
    newNode->next = head_;
    newNode->prev = NULL;
    head_->prev = newNode;
    head_ = newNode;
  }

  ++length_;

}

/**
 * Inserts a new node at the back of the List.
 * This function **SHOULD** create a new ListNode.
 *
 * @param ndata The data to be inserted.
 */
template <typename T>
void List<T>::insertBack(const T & ndata) {
  ListNode * newNode = new ListNode(ndata);
  if (length_ == 0) {
    newNode->next = NULL;
    newNode->prev = NULL;
    head_ = newNode;
    tail_ = newNode;
  } else {
    newNode->next = NULL;
    newNode->prev = tail_;
    tail_->next = newNode;
    tail_ = newNode;
  }
  ++length_;
  /// @todo Graded in MP3.1
}

/**
 * Helper function to split a sequence of linked memory at the node
 * splitPoint steps **after** start. In other words, it should disconnect
 * the sequence of linked memory after the given number of nodes, and
 * return a pointer to the starting node of the new sequence of linked
 * memory.
 *
 * This function **SHOULD NOT** create **ANY** new List or ListNode objects!
 *
 * This function is also called by the public split() function located in
 * List-given.hpp
 *
 * @param start The node to start from.
 * @param splitPoint The number of steps to walk before splitting.
 * @return The starting node of the sequence that was split off.
 */
template <typename T>
typename List<T>::ListNode * List<T>::split(ListNode * start, int splitPoint) {
  /// @todo Graded in MP3.1
  ListNode * curr = start;
  ListNode * inter = NULL;
  if (length_ == 0) {
    return NULL;
  }
  if (start == head_ && splitPoint == 0) {
    return curr;
  }
  for (int i = 0; i < splitPoint && curr != NULL; i++) {
    curr = curr->next;
  }
  if (curr != NULL) {
    inter = curr->prev;
    inter->next = NULL;
    curr->prev = NULL;
    return curr;
  }
  return NULL;
}
  

/**
  * Modifies List using the rules for a TripleRotate.
  *
  * This function will to a wrapped rotation to the left on every three 
  * elements in the list starting for the first three elements. If the 
  * end of the list has a set of 1 or 2 elements, no rotation all be done 
  * on the last 1 or 2 elements.
  * 
  * You may NOT allocate ANY new ListNodes!
  */
template <typename T>
void List<T>::tripleRotate() {
  // @todo Graded in MP3.1
  if (this->size() == 0 || this->size() == 1 || this->size() == 2) {
    return;
  } else if (this->size() == 3) {
      tail_->next = head_;
      head_->prev = tail_;
      (head_->next)->prev = NULL;
      head_->next = NULL;
      head_ = tail_->prev;
      tail_ = (head_->next)->next;
  } else if (this->size() == 4) {
      head_ = head_->next;
      head_->next->next = head_->prev;
      head_->prev = NULL;
      head_->next->next->next = tail_;
      head_->next->next->prev = head_->next;
  } else if (this->size() == 5) {
    head_ = head_->next;
    head_->next->next = head_->prev;
    head_->prev = NULL;
    head_->next->next->next = tail_->prev;
    head_->next->next->prev = head_->next;
  } else if (this->size() == 6) {
    head_ = head_->next;
    head_->next->next = head_->prev;
    head_->prev = NULL;
    head_->next->next->next = tail_->prev;
    tail_->next = head_->next->next->next->prev;
    head_->next->next->next->prev = head_->next->next;
    tail_->next->prev = tail_;
    tail_->next->next = NULL;
    tail_ = tail_->next;
  }
}


/**
 * Reverses the current List.
 */
template <typename T>
void List<T>::reverse() {
  reverse(head_, tail_);
}

/**
 * Helper function to reverse a sequence of linked memory inside a List,
 * starting at startPoint and ending at endPoint. You are responsible for
 * updating startPoint and endPoint to point to the new starting and ending
 * points of the rearranged sequence of linked memory in question.
 *
 * @param startPoint A pointer reference to the first node in the sequence
 *  to be reversed.
 * @param endPoint A pointer reference to the last node in the sequence to
 *  be reversed.
 */
template <typename T>
void List<T>::reverse(ListNode *& startPoint, ListNode *& endPoint) {
  /// @todo Graded in MP3.2
  ListNode * curr = NULL;
  ListNode * inter = NULL;
  ListNode * prestart = startPoint->prev;
  ListNode * postend = endPoint->next;
  /**
  if (startPoint == head_ && endPoint == tail_) {
    curr = head_;
    while (curr != NULL) {
      inter = curr->prev;
      curr->prev = curr->next;
      curr->next = inter;
      curr = curr->prev;
    }
    inter = head_;
    head_ = tail_;
    tail_ = inter;
  }
    */
  curr = startPoint;
  while (curr != endPoint) {
    inter = curr->prev;
    curr->prev = curr->next;
    curr->next = inter;
    curr = curr->prev;
  }
  inter = curr->prev;
  curr->prev = curr->next;
  curr->next = inter;
  curr = curr->prev;
  startPoint->next = postend;
  endPoint->prev = prestart;
  if (startPoint == head_ && endPoint == tail_) {
    inter = head_;
    head_ = tail_;
    tail_ = inter;
  } else if (startPoint == head_ && endPoint != tail_) {
    head_ = endPoint;
    postend->prev = startPoint;
  } else if (startPoint != head_ && endPoint == tail_) {
    tail_ = startPoint;
    prestart->next = endPoint;
  } else {
    prestart->next = endPoint;
    postend->prev = startPoint;
  }

}

/**
 * Reverses blocks of size n in the current List. You should use your
 * reverse( ListNode * &, ListNode * & ) helper function in this method!
 *
 * @param n The size of the blocks in the List to be reversed.
 */
template <typename T>
void List<T>::reverseNth(int n) {
  /// @todo Graded in MP3.2
  if (n >= length_) {
    reverse(head_, tail_);
    return;
  }
  ListNode * curr = head_;
  ListNode * currend = head_;
  while (curr != NULL) {
    for (int i = 0; i < n - 1; i++) {
      if (currend->next != NULL) {
        currend = currend->next;
      }
    }
    reverse(curr, currend);
    curr = curr->next;
    currend = curr;
  }

}


/**
 * Merges the given sorted list into the current sorted list.
 *
 * @param otherList List to be merged into the current list.
 */
template <typename T>
void List<T>::mergeWith(List<T> & otherList) {
    // set up the current list
    head_ = merge(head_, otherList.head_);
    tail_ = head_;

    // make sure there is a node in the new list
    if (tail_ != NULL) {
        while (tail_->next != NULL)
            tail_ = tail_->next;
    }
    length_ = length_ + otherList.length_;

    // empty out the parameter list
    otherList.head_ = NULL;
    otherList.tail_ = NULL;
    otherList.length_ = 0;
}

/**
 * Helper function to merge two **sorted** and **independent** sequences of
 * linked memory. The result should be a single sequence that is itself
 * sorted.
 *
 * This function **SHOULD NOT** create **ANY** new List objects.
 *
 * @param first The starting node of the first sequence.
 * @param second The starting node of the second sequence.
 * @return The starting node of the resulting, sorted sequence.
 */
template <typename T>
typename List<T>::ListNode * List<T>::merge(ListNode * first, ListNode* second) {
  /// @todo Graded in MP3.2
  if (first == NULL) {
    return second;
  }
  if (second == NULL) {
    return first;
  }
  ListNode * thehead;
  if (first->data == second->data) {
    thehead = first;
  }
  if (first->data < second->data) {
    thehead = first;
  } else {
    thehead = second;
  }
  ListNode * curr1 = first;
  ListNode * curr1prev = NULL;
  ListNode * curr2 = second;
  ListNode * curr2prev = NULL;
  while (curr1 != NULL && curr2 != NULL) {
    if (curr2->data < curr1->data) {
      curr1->prev = curr2;
      curr2->next = curr1;
      curr2->prev = curr1prev;
      if (curr1prev != NULL) {
        curr1prev->next = curr2;
      }
      curr2 = curr2next;
      if (curr2 != NULL) {
        curr2next = curr2->next;
      }
      curr1prev = curr1->prev;
    } else {
      curr1prev = curr1;
      curr1 = curr1->next;
    }
  }
if (curr1 == NULL) {
  curr1prev->next = curr2;
    curr2->prev = curr1prev;
  }
return thehead;
}

/**
 * Sorts a chain of linked memory given a start node and a size.
 * This is the recursive helper for the Mergesort algorithm (i.e., this is
 * the divide-and-conquer step).
 *
 * Called by the public sort function in List-given.hpp
 *
 * @param start Starting point of the chain.
 * @param chainLength Size of the chain to be sorted.
 * @return A pointer to the beginning of the now sorted chain.
 */
template <typename T>
typename List<T>::ListNode* List<T>::mergesort(ListNode * start, int chainLength) {
  /// @todo Graded in MP3.2
  if (chainLength == 0) {
    return NULL;
  } else if (chainLength == 1) {
    return start;
  } else {
    ListNode * second = split(start, chainLength / 2);
    start = mergesort(start, chainLength / 2);
    second = mergesort(second, chainLength - (chainLength / 2));
    return merge(start, second);
  }
}
