Output Status:

Runtime: 8 ms, faster than 32.00% of C++ online submissions for Partition Labels.
Memory Usage: 6.6 MB, less than 87.54% of C++ online submissions for Partition Labels.

class Solution {
public:
    vector<int> partitionLabels(string s) {
        
        vector<int> end_idx(26,0);
        int n = s.length();
        
        for(int i=0;i<n;i++){
            end_idx[s[i]-'a'] = i;
        }
        
        vector<int> res;
        
        int start=0,end=0;
        
        for(int i=0;i<n;i++){
            end = max(end,end_idx[s[i]-'a']);
            if(i==end){
                res.push_back(i-start+1);
                start = i+1;
            }
        }
        return res;
        
    }
};
