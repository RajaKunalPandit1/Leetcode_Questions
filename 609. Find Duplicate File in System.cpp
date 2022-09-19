Output Status : 

Runtime: 281 ms, faster than 12.21% of C++ online submissions for Find Duplicate File in System.
Memory Usage: 44.6 MB, less than 29.01% of C++ online submissions for Find Duplicate File in System.

class Solution {
public:
    vector<vector<string>> findDuplicate(vector<string>& paths) {
        
        vector<vector<string>> res;
        unordered_map<string,vector<string>> mp;
        
        for(auto path : paths){
            
            stringstream ss(path);
            string root;
            string s;
            
            getline(ss,root,' ');
            
            while(getline(ss,s,' ')){
                
                string fileName = root + '/' + s.substr(0,s.find('('));
                string fileContent = s.substr(s.find('(') + 1, s.find(')') - s.find('(') - 1);
                mp[fileContent].push_back(fileName);
            }
        }
        
        for(auto file: mp){
            
            if(file.second.size() > 1){
                res.push_back(file.second);
            }
        }
        return res;
    }
};
