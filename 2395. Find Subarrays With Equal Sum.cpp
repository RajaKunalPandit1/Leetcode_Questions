Output Status : 

Runtime
7 ms
Beats
30.74%
Memory
7.6 MB
Beats
73.53%

class Solution {
public:
    bool findSubarrays(vector<int>& nums) {

        unordered_set<int> st;

        int n = nums.size();

        for(int i=1;i<n;i++){

            if(st.find(nums[i] + nums[i-1]) != st.end()){
                return true;
            }
            st.insert(nums[i] + nums[i-1]);
        }
        return false;
    }
};
