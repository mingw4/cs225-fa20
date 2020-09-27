/**
 * @file quackfun.cpp
 * This is where you will implement the required functions for the
 * stacks and queues portion of the lab.
 */

namespace QuackFun {

/**
 * Sums items in a stack.
 *
 * **Hint**: think recursively!
 *
 * @note You may modify the stack as long as you restore it to its original
 * values.
 *
 * @note You may use only two local variables of type T in your function.
 * Note that this function is templatized on the stack's type, so stacks of
 * objects overloading the + operator can be summed.
 *
 * @note We are using the Standard Template Library (STL) stack in this
 * problem. Its pop function works a bit differently from the stack we
 * built. Try searching for "stl stack" to learn how to use it.
 *
 * @param s A stack holding values to sum.
 * @return  The sum of all the elements in the stack, leaving the original
 *          stack in the same state (unchanged).
 */
template <typename T>
T sum(stack<T>& s)
{
    if (s.size() == 0) {
        return T();
    }
    T curtop = s.top();
    s.pop();
    T resolve = curtop + sum(s);
    s.push(curtop);
    return resolve;
    // Your code here
     // stub return value (0 for primitive types). Change this!
                // Note: T() is the default value for objects, and 0 for
                // primitive types
}

/**
 * Checks whether the given string (stored in a queue) has balanced brackets.
 * A string will consist of square bracket characters, [, ], and other
 * characters. This function will return true if and only if the square bracket
 * characters in the given string are balanced. For this to be true, all
 * brackets must be matched up correctly, with no extra, hanging, or unmatched
 * brackets. For example, the string "[hello][]" is balanced, "[[][[]a]]" is
 * balanced, "[]]" is unbalanced, "][" is unbalanced, and "))))[cs225]" is
 * balanced.
 *
 * For this function, you may only create a single local variable of type
 * `stack<char>`! No other stack or queue local objects may be declared. Note
 * that you may still declare and use other local variables of primitive types.
 *
 * @param input The queue representation of a string to check for balanced brackets in
 * @return      Whether the input string had balanced brackets
*/
bool isBalanced(queue<char> input)
{
    if (input.size() == 0) {
        return true;
    }
    stack<char> s;
    int left = 0;
    int right = 0;
    bool result = true;
    unsigned isize = input.size();
    for (unsigned i = 0; i < isize; i++) {
        s.push(input.front());
        input.pop();
    }
    for (unsigned i = 0; i < isize; i++) {
        input.push(s.top());
        s.pop();
    }
    for (unsigned i = 0; i < isize; i++) {
        s.push(input.front());
        input.pop();
    }
    for (unsigned i = 0; i < isize; i++) {
        if (s.top() == '[') {
            left++;
        }
        if (s.top() == ']') {
            right++;
        }
        if (right > left) {
            result = false;
        }
        input.push(s.top());
        s.pop();
    }
    if (left != right) {
        result = false;
    }

    // @TODO: Make less optimistic
    return result;
}


/**
 * Reverses even sized blocks of items in the queue. Blocks start at size
 * one and increase for each subsequent block.
 *
 * **Hint**: You'll want to make a local stack variable.
 *
 * @note Any "leftover" numbers should be handled as if their block was
 * complete.
 *
 * @note We are using the Standard Template Library (STL) queue in this
 * problem. Its pop function works a bit differently from the stack we
 * built. Try searching for "stl stack" to learn how to use it.
 *
 * @param q A queue of items to be scrambled
 */
template <typename T>
void scramble(queue<T>& q)
{
    int size = q.size();
    int remain = q.size();
    stack<T> s1;
    stack<T> s2;
    stack<T> s3;
    queue<T> q2;
    if (size >= 3 && size <= 6) {
        T front = q.front();
        q.pop();
        s1.push(q.front());
        q.pop();
        s1.push(q.front());
        q.pop();
        remain = (remain - 3);
        for (int i = 0; i < remain; i++) {
            q2.push(q.front());
            q.pop();
        }
        q.push(front);
        q.push(s1.top());
        s1.pop();
        q.push(s1.top());
        s1.pop();
        for (int i = 0; i < remain; i++) {
            q.push(q2.front());
            q2.pop();
        }
    }
    if (size > 6 && size <= 10) {
        T front = q.front();
        q.pop();
        s1.push(q.front());
        q.pop();
        s1.push(q.front());
        q.pop();
        for (int i = 0; i < 3; i++) {
            q2.push(q.front());
            q.pop();
        }
        remain = remain - 6;
        for (int i = 0; i < remain; i++) {
            s2.push(q.front());
            q.pop();
        }
        q.push(front);
        q.push(s1.top());
        s1.pop();
        q.push(s1.top());
        s1.pop();
        for (int i = 0; i < 3; i++) {
            q.push(q2.front());
            q2.pop();
        }
        for (int i = 0; i < remain; i++) {
            q.push(s2.top());
            s2.pop();
        }
    }
    if (size > 10 && size <= 15) {
        T front = q.front();
        q.pop();
        s1.push(q.front());
        q.pop();
        s1.push(q.front());
        q.pop();
        for (int i = 0; i < 3; i++) {
            q2.push(q.front());
            q.pop();
        }
        for (int i = 0; i < 4; i++) {
            s2.push(q.front());
            q.pop();
        }
        remain = remain - 10;
        for (int i = 0; i < remain; i++) {
            q2.push(q.front());
            q.pop();
        }
        q.push(front);
        q.push(s1.top());
        s1.pop();
        q.push(s1.top());
        s1.pop();
        for (int i = 0; i < 3; i++) {
            q.push(q2.front());
            q2.pop();
        }
        for (int i = 0; i < 4; i++) {
            q.push(s2.top());
            s2.pop();
        }
        for (int i = 0; i < remain; i++) {
            q.push(q2.front());
            q2.pop();
        }
    }
    if (size > 15 && size <=21) {
        T front = q.front();
        q.pop();
        s1.push(q.front());
        q.pop();
        s1.push(q.front());
        q.pop();
        for (int i = 0; i < 3; i++) {
            q2.push(q.front());
            q.pop();
        }
        for (int i = 0; i < 4; i++) {
            s2.push(q.front());
            q.pop();
        }
        for (int i = 0; i < 5; i++) {
            q2.push(q.front());
            q.pop();
        }
        remain = remain - 15;
        for (int i = 0; i < remain; i++) {
            s3.push(q.front());
            q.pop();
        }
        q.push(front);
        q.push(s1.top());
        s1.pop();
        q.push(s1.top());
        s1.pop();
        for (int i = 0; i < 3; i++) {
            q.push(q2.front());
            q2.pop();
        }
        for (int i = 0; i < 4; i++) {
            q.push(s2.top());
            s2.pop();
        }
        for (int i = 0; i < 5; i++) {
            q.push(q2.front());
            q2.pop();
        }
        for (int i = 0; i < remain; i++) {
            q.push(s3.top());
            s3.pop();
        }
        

    }

    

    // optional: queue<T> q2;

    // Your code here
}
}
