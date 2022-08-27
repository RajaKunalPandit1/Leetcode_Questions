Output Status : 

Runtime: 1889 ms, faster than 43.60% of C++ online submissions for Max Sum of Rectangle No Larger Than K.
Memory Usage: 294.1 MB, less than 14.62% of C++ online submissions for Max Sum of Rectangle No Larger Than K.


class Solution {
public:
    int maxSumSubmatrix(vector<vector<int>>& matrix, int k) {
        
        int res = INT_MIN,rows = matrix.size(),cols = matrix[0].size();
        
        for(int l=0;l<cols;l++){
            
            vector<int> sums(rows);
            
            for(int r = l;r<cols;r++){
                for(int i=0;i<rows;i++){
                    sums[i] += matrix[i][r];
                }
                set<int> s = {0};
                int run_sum = 0;
                
                for(int sum : sums){
                    run_sum += sum;
                    auto it = s.lower_bound(run_sum-k);
                    if(it != end(s)){
                        res = max(res,run_sum - *it);
                    }
                    s.insert(run_sum);
                }   
            }
        }
        return res;
    }
};
