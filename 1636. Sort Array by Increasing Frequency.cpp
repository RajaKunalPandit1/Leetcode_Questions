Output Status : 

Runtime
14 ms
Beats
25.46%
Memory
11.3 MB
Beats
70.69%

class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        
        int n = nums.size();

        unordered_map<int,int> mp;
        priority_queue<pair<int,int>> pq;

        for(auto x : nums){
            mp[x]++;
        }

        for(auto x : mp){
            pq.push({-x.second,x.first});
        }

        nums.clear();

        while(!pq.empty()){

            for(int i=0;i<-(pq.top().first);i++){
                nums.push_back(pq.top().second);
            }
            pq.pop();
        }
        return nums;
    }
};
