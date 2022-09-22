Output Status : 

Runtime: 40 ms, faster than 21.80% of C++ online submissions for Reverse Words in a String III.
Memory Usage: 9.7 MB, less than 75.20% of C++ online submissions for Reverse Words in a String III.

class Solution {
public:
    string reverseWords(string s) {
     
        int low = 0,high = 0,temp = 0;
        
        int n = s.length();
        
        while(high <= n){
            
            if(s[high] == ' ' || s[high] == s[n]){
                
                temp = high-1;
                
                while(low <= temp){
                    swap(s[low++],s[temp--]);
                }
                low = high+1;
            }
            high++;
        }
        return s;
    }
};
