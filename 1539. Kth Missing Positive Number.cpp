Output Status : 

Runtime
3 ms
Beats
88.86%
Memory
9.6 MB
Beats
38.5%

class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        
        int left = 0,right = arr.size()-1;

        while(left <= right){

            int mid = left + (right-left)/2;
            if(arr[mid] - mid-1 < k){
                left = mid+1;
            }else{
                right = mid-1;
            }
        }
        return left + k;
    }
};
