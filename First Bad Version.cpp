Output Status:

Runtime: 0 ms, faster than 100.00% of C++ online submissions for First Bad Version.
Memory Usage: 5.9 MB, less than 67.34% of C++ online submissions for First Bad Version.

// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        
         int low = 1;
        int high = n;
        int first_bad_version = -1;
        while(low <= high){
            int mid = low + (high - low)/2;// to avoid overflow
            if(isBadVersion(mid)){
                first_bad_version = mid;
                high = mid-1;
                
            }else{
                low = mid+1;
            }
        }
        return first_bad_version;
        
    }
};
