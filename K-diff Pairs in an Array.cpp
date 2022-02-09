Output Status:

Runtime: 23 ms, faster than 60.46% of C++ online submissions for K-diff Pairs in an Array.
Memory Usage: 13.1 MB, less than 78.39% of C++ online submissions for K-diff Pairs in an Array.


class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        
        int n = nums.size();
        int res = 0;
        
       unordered_map <int,int> mp;
        
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        
        for(auto i: mp){
            
            if(k == 0){
                if(i.second>1){
                    res++;
                }
            }else{
                if(mp.find(i.first -k) != mp.end()){
                    res++;
                }
            }
            
        }
        
        
        return res;
    }
};
