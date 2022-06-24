Output Status: 

Runtime: 39 ms, faster than 100.00% of C++ online submissions for Construct Target Array With Multiple Sums.
Memory Usage: 28.6 MB, less than 81.82% of C++ online submissions for Construct Target Array With Multiple Sums.

  

class Solution {
public:
    bool isPossible(vector<int>& A) {
         long total = 0;
        int n = A.size(), a;
        priority_queue<int> pq(A.begin(), A.end());
        for (int a : A)
            total += a;
        while (true) {
            a = pq.top(); pq.pop();
            total -= a;
            if (a == 1 || total == 1)
                return true;
            if (a < total || total == 0 || a % total == 0)
                return false;
            a %= total;
            total += a;
            pq.push(a);
        }
    }
};
