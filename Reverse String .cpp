Output Status:

Runtime: 20 ms, faster than 80.72% of C++ online submissions for Reverse String.
Memory Usage: 23.1 MB, less than 76.61% of C++ online submissions for Reverse String.


class Solution {
public:
    void reverseString(vector<char>& s) {
        
        int n = s.size();
        
        int low=0,high = n-1;
        
        while(low<=high){
            swap(s[low],s[high]);
            low++;
            high--;
        }
        
    }
};

