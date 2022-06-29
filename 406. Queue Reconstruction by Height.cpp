Output Status: 

Runtime: 367 ms, faster than 10.31% of C++ online submissions for Queue Reconstruction by Height.
Memory Usage: 12 MB, less than 63.86% of C++ online submissions for Queue Reconstruction by Height.

  
class Solution {
public:
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
        
        vector<vector<int>> res;
        
        sort(people.begin(),people.end(),[](const vector<int>& a, const vector<int>& b){
           return (a[0] > b[0] || (a[0] == b[0] && a[1] < b[1])); 
        });
        
        for(vector<int>& x : people){
            res.insert(res.begin() + x[1], x);
        }
        return res;
    }
};
