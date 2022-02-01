Output Status: 

Runtime: 211 ms, faster than 29.59% of C++ online submissions for Best Time to Buy and Sell Stock.
Memory Usage: 93.4 MB, less than 12.96% of C++ online submissions for Best Time to Buy and Sell Stock.


class Solution {
public:
    int maxProfit(vector<int>& arr) {
        
        int n = arr.size(),res=0;
        int min_ele = arr[0];
        for(int i=1;i<n;i++){
            if(arr[i]<min_ele){
                min_ele = arr[i];
            }
            res = max(res,(arr[i]-min_ele));
        }
        return res;
        
    }
};


