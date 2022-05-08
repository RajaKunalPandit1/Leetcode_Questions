Output Status: 

Runtime: 19 ms, faster than 58.82% of C++ online submissions for Flatten Nested List Iterator.
Memory Usage: 13 MB, less than 82.52% of C++ online submissions for Flatten Nested List Iterator.

/**
 * // This is the interface that allows for creating nested lists.
 * // You should not implement it, or speculate about its implementation
 * class NestedInteger {
 *   public:
 *     // Return true if this NestedInteger holds a single integer, rather than a nested list.
 *     bool isInteger() const;
 *
 *     // Return the single integer that this NestedInteger holds, if it holds a single integer
 *     // The result is undefined if this NestedInteger holds a nested list
 *     int getInteger() const;
 *
 *     // Return the nested list that this NestedInteger holds, if it holds a nested list
 *     // The result is undefined if this NestedInteger holds a single integer
 *     const vector<NestedInteger> &getList() const;
 * };
 */

class NestedIterator {
public:
    typedef vector<NestedInteger>::iterator iter;  
    NestedIterator(vector<NestedInteger> &nestedList) {
        begins.push(nestedList.begin());
        ends.push(nestedList.end());
    }
    int next() {
        return begins.top()++->getInteger();
    }
    bool hasNext() {
        while(!begins.empty()) {
            iter it = begins.top();
            if(it == ends.top()) {
                begins.pop();
                ends.pop();
                if(!begins.empty()) begins.top()++;
            } else if (it->isInteger()) return 1;
            else {
                vector<NestedInteger>& lst = it->getList();
                begins.push(lst.begin());
                ends.push(lst.end());
            }
        }
        return 0;
    }
private:
   stack<iter> begins, ends;
};

/**
 * Your NestedIterator object will be instantiated and called as such:
 * NestedIterator i(nestedList);
 * while (i.hasNext()) cout << i.next();
 */
