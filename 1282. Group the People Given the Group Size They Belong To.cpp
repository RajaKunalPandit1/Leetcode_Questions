Output Status ; 

Runtime
4 ms
Beats
95.5%
Memory
12.6 MB
Beats
88.22%

class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        unordered_map<int, vector<int>> temp_group;
        vector<vector<int>> result;
        
        for(int i = 0; i < groupSizes.size(); ++i) {
            int size = groupSizes[i];
            temp_group[size].push_back(i);
            
            if(temp_group[size].size() == size) {
                result.push_back(temp_group[size]);
                temp_group[size].clear();
            }
        }
        return result;
    }
};
