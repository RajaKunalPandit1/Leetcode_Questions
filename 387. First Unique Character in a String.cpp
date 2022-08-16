Output Status : 

Runtime: 71 ms, faster than 38.28% of C++ online submissions for First Unique Character in a String.
Memory Usage: 10.7 MB, less than 71.90% of C++ online submissions for First Unique Character in a String.

// Naive Solution :: Time : O(N^2) :: Aux_Space : O(1)

class Solution {
public:
    int firstUniqChar(string s) {
        
        int n = s.length();
        
        for(int i=0;i<n;i++){
            bool flag = false;
            
            for(int j=0;j<n;j++){
                if(i!=j && s[i] == s[j]){
                    flag = true;
                    break;
                }
            }
            if(!flag){
                return i;
            }
        }
            
        return -1;    
    }
};


// Efficient Solution : Time : O(N) :: Aux_Space : O(N)

class Solution {
public:
    int firstUniqChar(string s) {
        
        int n = s.length();
        
        unordered_map<char,int> mp;
        
        for(auto x : s){
            mp[x]++;
        }
        
        for(int i=0;i<n;i++){
           
            if(mp[s[i]] == 1){
                return i;
            }
        }
        return -1;
    }
};
