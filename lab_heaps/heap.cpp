
/**
 * @file heap.cpp
 * Implementation of a heap class.
 */

template <class T, class Compare>
size_t heap<T, Compare>::root() const
{
    // @TODO Update to return the index you are choosing to be your root.
    return 1;
}

template <class T, class Compare>
size_t heap<T, Compare>::leftChild(size_t currentIdx) const
{
    // @TODO Update to return the index of the left child.
    return 2 * currentIdx;
}

template <class T, class Compare>
size_t heap<T, Compare>::rightChild(size_t currentIdx) const
{
    // @TODO Update to return the index of the right child.
    return 1 + 2 * currentIdx;
}

template <class T, class Compare>
size_t heap<T, Compare>::parent(size_t currentIdx) const
{
    // @TODO Update to return the index of the parent.
    return currentIdx / 2;
}

template <class T, class Compare>
bool heap<T, Compare>::hasAChild(size_t currentIdx) const
{
    // @TODO Update to return whether the given node has a child
    return 2 * currentIdx <= _elems.size();
}

template <class T, class Compare>
size_t heap<T, Compare>::maxPriorityChild(size_t currentIdx) const
{
    // @TODO Update to return the index of the child with highest priority
    ///   as defined by higherPriority()
    if (!hasAChild(currentIdx)) {
        return -1;
    }
    if (2 * currentIdx == _elems.size()) {
        return 2 * currentIdx;
    }
    if (_elems[2 * currentIdx] < _elems[2 * currentIdx + 1]) {
        return 2 * currentIdx;
    }
    return 2 * currentIdx + 1;
}

template <class T, class Compare>
void heap<T, Compare>::heapifyDown(size_t currentIdx)
{
    // @TODO Implement the heapifyDown algorithm.
    if (!hasAChild(currentIdx)) {
        return;
    }
    if (_elems[maxPriorityChild(currentIdx)] < _elems[currentIdx]) {
        size_t idx = maxPriorityChild(currentIdx);
        std::swap(_elems[currentIdx], _elems[idx]);
        heapifyDown(idx);
    }
    return;
}

template <class T, class Compare>
void heap<T, Compare>::heapifyUp(size_t currentIdx)
{
    if (currentIdx == root())
        return;
    size_t parentIdx = parent(currentIdx);
    if (higherPriority(_elems[currentIdx], _elems[parentIdx])) {
        std::swap(_elems[currentIdx], _elems[parentIdx]);
        heapifyUp(parentIdx);
    }
}

template <class T, class Compare>
heap<T, Compare>::heap()
{
    // @TODO Depending on your implementation, this function may or may
    ///   not need modifying
    _elems.push_back(T());
}

template <class T, class Compare>
heap<T, Compare>::heap(const std::vector<T>& elems) 
{
    // @TODO Construct a heap using the buildHeap algorithm
    _elems.push_back(T());
    for (size_t j = 0; j <elems.size(); ++j) {
        this->push(elems[j]);
    }
}

template <class T, class Compare>
T heap<T, Compare>::pop()
{
    // @TODO Remove, and return, the element with highest priority
    if (_elems.size() <= 1) {
        return T();
    }
    T min = _elems[1];
    _elems[1] = _elems[_elems.size() - 1];
    _elems.pop_back();
    heapifyDown(1);
    return min;
}

template <class T, class Compare>
T heap<T, Compare>::peek() const
{
    // @TODO Return, but do not remove, the element with highest priority
    if (_elems.size() >= 1) {
        return _elems[1];
    }
    return T();
}

template <class T, class Compare>
void heap<T, Compare>::push(const T& elem)
{
    // @TODO Add elem to the heap
    _elems.push_back(elem);
    heapifyUp(_elems.size() - 1);
}

template <class T, class Compare>
void heap<T, Compare>::updateElem(const size_t & idx, const T& elem)
{
    // @TODO In-place updates the value stored in the heap array at idx
    // Corrects the heap to remain as a valid heap even after update
    T removed =_elems[idx];
    _elems[idx] = elem;
    if (elem > removed) {
        heapifyDown(idx);
    } else {
        heapifyUp(idx);
    }
}


template <class T, class Compare>
bool heap<T, Compare>::empty() const
{
    // @TODO Determine if the heap is empty
    if (_elems.size() > 1) {
        return false;
    }
    return true;
}

template <class T, class Compare>
void heap<T, Compare>::getElems(std::vector<T> & heaped) const
{
    for (size_t i = root(); i < _elems.size(); i++) {
        heaped.push_back(_elems[i]);
    }
}
