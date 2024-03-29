Output Status : 

Runtime: 6 ms, faster than 93.19% of C++ online submissions for Maximum Length of a Concatenated String with Unique Characters.
Memory Usage: 9.6 MB, less than 77.45% of C++ online submissions for Maximum Length of a Concatenated String with Unique Characters.


class Solution {
public:
    int maxLength(vector<string>& arr) {
        
        vector<bitset<26>> dp = {bitset<26>()};
        
        int res = 0;
        
        for(auto &s : arr){
            
            bitset<26> a;
            for(char c : s){
                a.set(c-'a');
            }
            
            int n = a.count();
            if(n < s.size()) continue;
            
            for(int i=dp.size()-1;i>=0;i--){
                
                bitset c = dp[i];
                
                if((c&a).any()) continue;
                dp.push_back(c  | a );
                res = max(res,(int)c.count() + n);
            }
        }
        return res;
    }
};
