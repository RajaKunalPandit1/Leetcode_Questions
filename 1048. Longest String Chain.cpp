Output Status: 

Runtime: 183 ms, faster than 33.78% of C++ online submissions for Longest String Chain.
Memory Usage: 13.2 MB, less than 74.21% of C++ online submissions for Longest String Chain.


class Solution {
public:
    
    bool checkPossible(string &s1, string &s2){
        
        if(s1.size() != s2.size()+1) return false;
        
        int first = 0;
        int second = 0;
        
        while(first < s1.size()){
            
            if(s1[first] == s2[second] && second < s2.size()){
                first++;
                second++;
            }else{
                first++;
            }
        }
        
        if(first == s1.size() && second == s2.size()) return true;
        return false;
    }
    
    static bool cmp(string &s1, string &s2){
        
        return s1.size() < s2.size();
        
    }
    
    
    int longestStrChain(vector<string>& words) {
        
        sort(words.begin(),words.end(),cmp);
        
        
        int n = words.size();
        
        vector<int> dp(n,1);
        
        int maxi = 1;
        
        for(int i=0;i<n;i++){
          
            for(int prev =0 ; prev<i;prev++){
                if(checkPossible(words[i],words[prev]) && 1+dp[prev] > dp[i]){
                    dp[i] =  1+ dp[prev];
                }
            }
            if(dp[i] > maxi){
                maxi = dp[i];
            }
        }
        return maxi;
    }
};
