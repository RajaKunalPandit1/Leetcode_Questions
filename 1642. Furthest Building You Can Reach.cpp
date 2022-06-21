Output Status: 

Runtime: 132 ms, faster than 73.45% of C++ online submissions for Furthest Building You Can Reach.
Memory Usage: 53.7 MB, less than 42.34% of C++ online submissions for Furthest Building You Can Reach.


class Solution {
public:
    int furthestBuilding(vector<int>& A, int bricks, int ladders) {
        priority_queue<int> pq;
        for (int i = 0; i < A.size() - 1; i++) {
            int d = A[i + 1] - A[i];
            if (d > 0)
                pq.push(-d);
            if (pq.size() > ladders) {
                bricks += pq.top();
                pq.pop();
            }
            if (bricks < 0)
                return i;
        }
        return A.size() - 1;
    }
};
