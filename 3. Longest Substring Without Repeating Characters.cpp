Output Status : 

Runtime: 3 ms, faster than 98.60% of C++ online submissions for Longest Substring Without Repeating Characters.
Memory Usage: 8.3 MB, less than 59.36% of C++ online submissions for Longest Substring Without Repeating Characters.


// Naive Solution :: Time : O(2N) :: Aux_Space : O(N)
  
  class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        int n = s.length();
        
        int res = 0;
        int l=0,r = 0;
        
        unordered_set<char> sett;
        
        while(l<n && r<n){
                
            if(sett.find(s[r]) != sett.end()){
                
                while(sett.find(s[r]) != sett.end()){
                    sett.erase(s[l]);
                    l++;
                }
                sett.insert(s[r]);
                r++;
                
            }else{
                res  = max(res,abs(r-l+1));
                sett.insert(s[r]);
                r++;
            }
        }
        return res;
    }
};

// Efficient Solution :: Time : O(N) :: Aux_Space : O(N)

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        int n = s.length();
        int res = 0;
        int l = 0,r=0;
        vector<int> mp(256,-1);
        
        while(r<n){
            
            if(mp[s[r]] != -1){
                l = max(mp[s[r]] + 1, l);
            }
            
            mp[s[r]] = r;
            
            res = max(res,r-l+1);
            r++;
        }
        return res;
    }
};
