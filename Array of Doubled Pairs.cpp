Output Status:
Runtime: 116 ms, faster than 62.27% of C++ online submissions for Array of Doubled Pairs.
Memory Usage: 57.9 MB, less than 74.07% of C++ online submissions for Array of Doubled Pairs.
  
  
  // Time: O(nlogn) :: Aux_Space: O(n);
  
  
  class Solution {
public:
    bool canReorderDoubled(vector<int>& arr) {
        
        unordered_map<int,int> mp;
        int n = arr.size();
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
        }
        sort(arr.begin(),arr.end());
        for(auto x:arr){
            if(mp[x]&& mp[2*x]){
                mp[x]--;
                mp[2*x]--;
            }
        }
        
        for(auto [a,b]:mp)
            if(b) return false;
        
        return true;
  
        
    }
};


  
  
