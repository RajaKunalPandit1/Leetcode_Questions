Output Status: 

Runtime: 51 ms, faster than 25.44% of C++ online submissions for Remove Covered Intervals.
Memory Usage: 12.1 MB, less than 21.27% of C++ online submissions for Remove Covered Intervals.


class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        
        int res = 0,left = -1, right = -1;
        
        sort(intervals.begin(),intervals.end());
        
        for(auto v: intervals){
            if(v[0] > left && v[1] > right){
                left = v[0];
                res++;
            }
            right = max(right, v[1]);
            
        }
        return res;
        
    }
};
