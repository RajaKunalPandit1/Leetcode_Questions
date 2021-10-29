Output Status:

Runtime: 32 ms, faster than 37.06% of C++ online submissions for Duplicate Zeros.
Memory Usage: 9.7 MB, less than 78.06% of C++ online submissions for Duplicate Zeros.

class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        
        int n = arr.size();
        for(int i=0;i<n;i++){
            if(arr[i] == 0){
                arr.pop_back();
                arr.insert(arr.begin()+i,0);
                i++;
            }
        }
        
    }
};
