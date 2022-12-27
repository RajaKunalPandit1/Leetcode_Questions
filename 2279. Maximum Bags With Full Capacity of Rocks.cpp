Output Status : 

Runtime
209 ms
Beats
82.86%
Memory
89.4 MB
Beats
50.33%

class Solution {
public:
    int maximumBags(vector<int>& c, vector<int>& rocks, int b) {
         vector<int>v;
        for(int i=0;i<rocks.size();i++)     v.push_back(c[i]-rocks[i]);
        sort(v.begin(),v.end());
        int i=0;
        while(b>0 and i<c.size()){
            b-=v[i];
            i++;
        }
        return b<0 ? i-1 : i;
    }
};
