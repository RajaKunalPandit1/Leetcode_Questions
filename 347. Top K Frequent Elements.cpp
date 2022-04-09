Output Status: 

Runtime: 18 ms, faster than 70.40% of C++ online submissions for Top K Frequent Elements.
Memory Usage: 13.6 MB, less than 89.57% of C++ online submissions for Top K Frequent Elements.


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
