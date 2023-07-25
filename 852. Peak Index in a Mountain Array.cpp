Output Status : 

Runtime
131 ms
Beats
39.78%
Memory
59.8 MB
Beats
9.15%

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        
        int n = arr.size();

        int low = 0,high = n-1;

        while(low <= high){

            int mid = (low + high) >> 1;

            if((mid == 0 || arr[mid] > arr[mid-1]) && (mid == n-1 || arr[mid] > arr[mid+1])){
                return mid;
            }else if((mid == 0 || arr[mid] > arr[mid-1]) && (mid == n-1 || arr[mid] < arr[mid+1])){
                low = mid+1;
            }else{
                high = mid-1;
            }
        }
        return -1;
    }
};
