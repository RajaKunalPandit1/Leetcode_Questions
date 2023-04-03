Output Status : 

Runtime
101 ms
Beats
12.16%
Memory
42 MB
Beats
11.29%

class Solution {
public:
    int numRescueBoats(vector<int>& arr, int limit) {
        
        int n = arr.size();
        int res = 0,low = 0,high = n-1;

        sort(arr.begin(),arr.end());

        while(low  <= high){

            if(arr[low] + arr[high] <= limit){
                res++;
                low++;
                high--;
            }else{
                res++;
                high--;
            }
        }
        return res;
    }
};
