Output Status : 

Runtime: 84 ms, faster than 66.13% of C++ online submissions for Find K Closest Elements.
Memory Usage: 31.2 MB, less than 86.01% of C++ online submissions for Find K Closest Elements.

class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        
        int n = arr.size();
        int low = 0,high = n-k;
        
        while(low < high){
            
            int mid = (low + high) >> 1;
            
            if(x - arr[mid] > arr[mid+k] - x){
                low = mid+1;
            }else{
                high = mid;
            }
        }
        
        return vector<int>(arr.begin()+low,arr.begin()+ low +k);
        
    }
};
