Output Status: 

Runtime: 2 ms, faster than 43.62% of C++ online submissions for Remove Palindromic Subsequences.
Memory Usage: 6.3 MB, less than 26.79% of C++ online submissions for Remove Palindromic Subsequences.


class Solution {
public:
    int removePalindromeSub(string s) {
     
        int n = s.length();
        if(n == 0){
            return 0;
        }
        
        int low = 0,high = n-1;
        
        while(low<=high){
            
            if(s[low] == s[high]){
                low++;
                high--;
            }else{
                return 2;
            }
        }
        return 1;
    }
};
