Output Status: 

Runtime: 144 ms, faster than 55.50% of C++ online submissions for Largest Rectangle in Histogram.
Memory Usage: 63.3 MB, less than 57.51% of C++ online submissions for Largest Rectangle in Histogram.


class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
         int n = heights.size() , max_area = INT_MIN , i = 0 ; 
        stack<int> s ;
        while(i < n) {
            if(s.empty() || heights[s.top()] <= heights[i]) {
                s.push(i) ; 
                i++ ; 
            } else {
                int prev_top = s.top() ; 
                s.pop() ; 
                max_area = max(max_area , heights[prev_top] * (s.empty() ? i : i - s.top() - 1)) ;
            }
        }
        while(!s.empty()) {
            int prev_top = s.top() ; 
            s.pop() ; 
            max_area = max(max_area , heights[prev_top] * (s.empty() ? i : i - s.top() - 1)) ;
        }  
        return max_area ;
    }
};
