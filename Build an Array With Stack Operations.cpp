Output Status:

Runtime: 3 ms, faster than 51.11% of C++ online submissions for Build an Array With Stack Operations.
Memory Usage: 7.9 MB, less than 8.04% of C++ online submissions for Build an Array With Stack Operations.
  
  
  class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        
        int count = 1;
        vector<string> res;
        
        for(int i=0;i<target.size();i++){
            while(target[i]!=count){
                res.push_back("Push");
                res.push_back("Pop");
                count++;
            }
            res.push_back("Push");
            count++;
        }
        return res;
    }
};
