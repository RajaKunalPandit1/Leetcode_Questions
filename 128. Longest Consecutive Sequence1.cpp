Output Status : 

Runtime
79 ms
Beats
83.1%
Memory
33.7 MB
Beats
89.86%

// Naive Solution :: Time : O(NlogN) :: Aux_Space : O(1)

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        int n = nums.size();

        if(n == 0){return 0;}

        int res = 1,curr = 1;

        sort(nums.begin(),nums.end());

        for(int i=1;i<n;i++){
            
            if(nums[i] == nums[i-1]+1){
                curr++;
            }else if(nums[i] != nums[i-1]){
                res = max(res,curr);
                curr = 1;
            }
        }
        return max(res,curr);
    }
};

// Efficient Solution :: Time : O(N) :: Aux_Space : O(N)


class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        unordered_set<int> st(nums.begin(),nums.end());

        int curr =0,res = 0;

        for(auto x: st){

            if(st.find(x-1) == st.end()){

                curr = 1;

                while(st.find(curr+x) != st.end()){
                    curr++;
                }
                res = max(res,curr);
            }
        }
        return res;
    }
};
