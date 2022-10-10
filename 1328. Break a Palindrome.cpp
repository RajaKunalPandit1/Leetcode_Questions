Output Status : 

Runtime: 0 ms, faster than 100.00% of C++ online submissions for Break a Palindrome.
Memory Usage: 6.3 MB, less than 5.00% of C++ online submissions for Break a Palindrome.


class Solution {
public:
    string breakPalindrome(string palindrome) {
        
        int n = palindrome.length();
        
        if(n == 1){
            return "";
        }
        
        for(int i=0;i<n/2;i++){
            
            if(palindrome[i] != 'a'){
                palindrome[i] = 'a';
                return palindrome;
            }
        }
        
        palindrome[n-1] = 'b';
        return palindrome;
        
    }
};
