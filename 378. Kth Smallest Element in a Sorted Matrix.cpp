Output Status : 

Runtime: 39 ms, faster than 81.72% of C++ online submissions for Kth Smallest Element in a Sorted Matrix.
Memory Usage: 14.7 MB, less than 16.78% of C++ online submissions for Kth Smallest Element in a Sorted Matrix.
  
 // Naive Solution :: Time : O(M*N) + O((M*N)*log(M*N)) :: Aux_Space : O(M*N)
  
  class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        
        int row = matrix.size();
        int col = matrix[0].size();
        
        vector<int> res;
        
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                
                res.push_back(matrix[i][j]);
                
            }
        }
        
        sort(res.begin(),res.end());
        
        return res[k-1];
    }
};

// Better Solution :: Time : O(M * N * logK) :: Aux_Space : O(logK)

class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        
        int row = matrix.size();
        int col = matrix[0].size();
        
        priority_queue<int> pq;
        
        for(int i=0;i<row;i++){
            
            for(int j=0;j<col;j++){
                pq.push(matrix[i][j]);
                if(pq.size() > k) pq.pop();
            }
        }
        
        int res = pq.top();
        return res;
    }
};

// Another Better Solution :: Time : O((M+N) * logD) :: Aux_Space : O(1)

class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        
        int n = matrix.size();
        int lo = matrix[0][0], hi = matrix[n-1][n-1] + 1, mid, count, tmp;
        
        while (lo < hi) {
            mid = lo + (hi - lo) / 2, tmp = n - 1, count = 0;
            
			// For each row, we count the elements that are smaller then mid
            for (int i = 0; i < n; i++) {
                while (tmp >= 0 && matrix[i][tmp] > mid) tmp--;
                count += tmp + 1;
            }
            
            if (count < k) lo = mid + 1;
            else hi = mid;
        }
        
        return lo;
        
    }
};
