Output Status:

Runtime: 68 ms, faster than 54.06% of C++ online submissions for Valid Palindrome II.
Memory Usage: 23.9 MB, less than 39.29% of C++ online submissions for Valid Palindrome II.


class Solution {
public:
    
    bool ispalin(string s, int i,int j){
        
        while(i<=j){
            
            if(s[i] == s[j]){
                i++;
                j--;
            }else{
                return false;
            }    
        }
        return true;
    }
    
    bool validPalindrome(string s) {
        
        int n = s.length();
        
        int low=0,high = n-1;
        
        while(low<=high){
            
            if(s[low] == s[high]){
                low++;
                high--;
            }else{
                return (ispalin(s,low+1,high) || ispalin(s,low,high-1));
            }
        }
        return true;       
    }
};
