Output Status: 


Runtime: 168 ms, faster than 15.86% of C++ online submissions for Container With Most Water.
Memory Usage: 58.9 MB, less than 81.47% of C++ online submissions for Container With Most Water.

// Brute Force Solution 

class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        
        int res = 0;
       
        
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int area = (j-i) * min(height[i],height[j]);
                res = max(res,area);
            }
        }
        return res;
    }
};

// Another Efficient Solution

class Solution {
public:
    int maxArea(vector<int>& height) {
        
        int n = height.size();
        int res = 0;
        int l=0,r= n-1;
        
        while(l<r){
            
            int area = (r-l) * min(height[l],height[r]);
            
            res = max(res,area);
            
            if(height[l] < height[r]){
                l++;
            }else{
                r--;
            }

        }
        
        return res;
        
    }
};
