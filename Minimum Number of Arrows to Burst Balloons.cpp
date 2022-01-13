Output Status:

Runtime: 396 ms, faster than 83.59% of C++ online submissions for Minimum Number of Arrows to Burst Balloons.
Memory Usage: 89.8 MB, less than 63.52% of C++ online submissions for Minimum Number of Arrows to Burst Balloons.


  
  class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(),points.end());

//start is the start of first balloon
        int start = points[0][0];
		
//end is the end of first balloon
        int end = points[0][1];
		
// we would need atleast 1 arrow to burst the first balloon
        int ans = 1;
		
//start a for loop for other balloons
        for(int i=1;i<points.size();i++){
		
//if start of any balloon is before end of the balloon, it means they coincide
                if(points[i][0]<=end){
				
// since we need to find the intersection, find the start value more to the right
                    start = max(start,points[i][0]);
					
// since we need to find the intersection, find the end value more to the left
                    end = min(end,points[i][1]);
                }else{
				
//else we know that the current balloon doesnt coincide with other balloons 
//so we set start and end to the current balloon and increase the ans by one
                    start = points[i][0];
                    end = points[i][1];
                    ans++;
                }
        }
        return ans;
    }
};
