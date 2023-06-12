Output Status : 

Runtime
4 ms
Beats
34.63%
Memory
6.9 MB
Beats
13.50%

class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        
        int n = nums.size();

        vector<string> res;

        if(n == 0){
            return res;
        }

        int a = nums[0];

        for(int i=0;i<n;i++){

            if(i == n-1 || nums[i] + 1 != nums[i+1] ){

                if(nums[i] != a)
                    res.push_back(to_string(a)+ "->"+ to_string(nums[i]));
                else
                    res.push_back(to_string(a));
                
                if( i != n-1){
                    a = nums[i+1];
                }
            }
        }
        return res;
    }
};
