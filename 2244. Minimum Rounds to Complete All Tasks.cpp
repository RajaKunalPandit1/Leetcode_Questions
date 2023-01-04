Output Status : 

Runtime
315 ms
Beats
58.78%
Memory
103.6 MB
Beats
72%

class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        int n = tasks.size();

        unordered_map<int,int> mp;
        int res = 0;

        for(int i=0;i<n;i++){
            mp[tasks[i]]++;
        }

        for(auto x: mp){
            if(x.second == 1){
                return -1;
            }else{
                res += (x.second + 2)/3;
            }
        }
        return res;
    }
};
