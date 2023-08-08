Output Status : 

Runtime
0 ms
Beats
100%
Memory
11 MB
Beats
45.3%

class Solution {
public:
    int search(vector<int>& arr, int target) {

        int n = arr.size();

        int low = 0,high = n-1;

        while(low <= high){

            int mid = (low + high)/2;

            if(arr[mid] == target){
                return mid;
            }

            if(arr[mid] >= arr[low]){

                if(target >= arr[low] && arr[mid] > target){
                    high = mid-1;
                }else{
                    low = mid+1;
                }
            }else{
                if(target <= arr[high] && arr[mid] < target){
                    low = mid+1;
                }else{
                    high = mid-1;
                }
            }
        }
        return -1;
    }
};
