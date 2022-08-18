Output Status : 

Runtime: 524 ms, faster than 13.78% of C++ online submissions for Reduce Array Size to The Half.
Memory Usage: 99.4 MB, less than 5.44% of C++ online submissions for Reduce Array Size to The Half.


class Solution {
public:
    int minSetSize(vector<int>& arr) {
        
        map<int,int> mp;
        
        for(auto x: arr){
            mp[x]++;
        }
        
        multimap<int,int,greater<int>> mmp;
        
        for(auto it : mp){
            mmp.insert({it.second,it.first});
        }
        
        int n = arr.size();
        int sum = n;
        int count = 0;
        
        for(auto it = mmp.begin();it != mmp.end();it++){
            
            sum -= it->first;
            count++;
            if(sum <= n/2){
                return count;
            }
            
        }
        return count;
    }
};
