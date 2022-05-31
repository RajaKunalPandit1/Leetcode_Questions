Output Staus: 

Runtime: 465 ms, faster than 52.20% of C++ online submissions for Check If a String Contains All Binary Codes of Size K.
Memory Usage: 71.8 MB, less than 37.11% of C++ online submissions for Check If a String Contains All Binary Codes of Size K.


class Solution {
public:
    bool hasAllCodes(string s, int k) { 
    
       int n = s.length();
    
        if(n<k){
            return false;
        }
        
       unordered_set<string>str;
        
        for(int i=0;i<n-k+1;i++){
   
            str.insert(s.substr(i,k));
        }
        
      return (str.size() == pow(2,k));
    }
};

// Another Python Sol

def hasAllCodes(self, s, k):
        return len({s[i:i + k] for i in xrange(len(s) - k + 1)}) == 2 ** k
