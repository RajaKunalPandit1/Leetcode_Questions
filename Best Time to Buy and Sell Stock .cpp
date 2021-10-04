Output Status:

Runtime: 126 ms, faster than 43.43% of C++ online submissions for Best Time to Buy and Sell Stock.
Memory Usage: 93.3 MB, less than 53.73% of C++ online submissions for Best Time to Buy and Sell Stock.


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
