Output Status : 

Runtime: 165 ms, faster than 15.33% of C++ online submissions for Set Mismatch.
Memory Usage: 30.9 MB, less than 30.01% of C++ online submissions for Set Mismatch.

class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        
        int n = nums.size();
        unordered_map<int,int>  mp;
        
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        
        vector<int>res(2,0);
        
        for(int i=1;i<=n;i++){
            if(mp[i] > 1){
                res[0] = i;                
            }else if(mp[i] == 0){
                res[1] = i;
            }
        }
        return res;
    }
};
