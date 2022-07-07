Output Status : 

Runtime: 133 ms, faster than 6.44% of C++ online submissions for Interleaving String.
Memory Usage: 36.6 MB, less than 10.83% of C++ online submissions for Interleaving String.

// Naive Solution :: Time : O(2^(M+N)) :: Aux_Space : O(M+N)
  
  class Solution {
public:
    
    unordered_map<string,bool> mp;
    
    bool check(string s1, int i, string s2, int j, string res, string s3){
        
        if(res == s3 && i == s1.length() && j == s2.length())
            return true;
        
       bool ans = false;
        if(i < s1.length())
            ans |= check (s1, i + 1, s2, j, res + s1[i], s3);
        if(j < s2.length())
            ans |= check (s1, i, s2, j + 1, res + s2[j], s3);
        return ans;
        
    }
    
    
    bool isInterleave(string s1, string s2, string s3) {
        
        int n1 = s1.length(),n2 = s2.length(), n3 = s3.length();
        
        if(n1 + n2 != n3){
            return false;
        }
        
        return check(s1, 0, s2, 0, "", s3);
    }
};
  
  
// Efficient Solution :: Time : O(M*N) :: Aux_Space : O(N)  
  
class Solution {
public:
    
    unordered_map<string,bool> mp;
    
    bool check(string s1, string s2, string s3, int len1, int len2, int len3, int p1, int p2, int p3){
        
        if(p3 == len3){
            return (p1 == len1 && p2 == len2)?true:false;
        }
        
        string key = to_string(p1)+"*"+to_string(p2)+"*"+to_string(p3);
        
        
        if(mp.find(key) != mp.end()){
            return mp[key];
        }
        
        // cases for calcualting the Keys
        
        if(p1 == len1){
            return mp[key] = s2[p2] == s3[p3]?check(s1,s2,s3,len1,len2,len3,p1,p2+1,p3+1):false;
        }
        
        if(p2 == len2){
            return mp[key] = s1[p1] == s3[p3]?check(s1,s2,s3,len1,len2,len3,p1+1,p2,p3+1):false;
        }
        
        bool one = false,two = false;
        
        if(s1[p1] == s3[p3]){
            one = check(s1,s2,s3,len1,len2,len3,p1+1,p2,p3+1);
        } 
        if(s2[p2] == s3[p3]){
            two = check(s1,s2,s3,len1,len2,len3,p1,p2+1,p3+1);
        }
        
        return mp[key] = (one || two);
        
    }
    
    
    bool isInterleave(string s1, string s2, string s3) {
        
        int n1 = s1.length(),n2 = s2.length(), n3 = s3.length();
        
        if(n1 + n2 != n3){
            return false;
        }
        
        return check(s1,s2,s3,n1,n2,n3,0,0,0);
    }
};
