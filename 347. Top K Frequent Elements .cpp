Output Status : 

Runtime
20 ms
Beats
43.48%
Memory
13.8 MB
Beats
42.78%

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        vector<int> res;
        // int freq[n+1];
        int n = nums.size();
        
        map<int,int> mp;
        
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        
        priority_queue<pair<int,int>> maxHeap;
        
        for(auto & pair: mp){
            maxHeap.emplace(pair.second,pair.first);
        }
        
        while(k--){
            res.push_back(maxHeap.top().second);
            maxHeap.pop();
        }
        
        return res;
    }
};
