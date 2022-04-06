Output Status: 

Runtime: 1302 ms, faster than 18.37% of C++ online submissions for 3Sum With Multiplicity.
Memory Usage: 10.9 MB, less than 20.41% of C++ online submissions for 3Sum With Multiplicity.

class Solution {
public:
    int threeSumMulti(vector<int>& arr, int X) {
        
       int n = arr.size(), mod = 1e9+7, ans = 0;
        unordered_map<int, int> m;
        
        for(int i=0; i<n; i++) {
            ans = (ans + m[X - arr[i]]) % mod;
            
            for(int j=0; j<i; j++) m[arr[i] + arr[j]]++;
        }
        return ans;
        
    }
};
