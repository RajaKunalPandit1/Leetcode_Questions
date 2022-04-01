Output Status:

Runtime: 20 ms, faster than 89.90% of C++ online submissions for Reverse String.
Memory Usage: 23.3 MB, less than 41.72% of C++ online submissions for Reverse String.


class Solution {
public:
    void reverseString(vector<char>& s) {
        
        int n = s.size();
        
        int i=0,j=n-1;
        
        while(i<=j){
            
            swap(s[i],s[j]);
            i++;
            j--;
        
        }
        
    }
};
