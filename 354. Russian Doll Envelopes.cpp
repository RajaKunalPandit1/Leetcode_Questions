Output Status : 

Runtime: 557 ms, faster than 34.30% of C++ online submissions for Russian Doll Envelopes.
Memory Usage: 87.7 MB, less than 25.32% of C++ online submissions for Russian Doll Envelopes.


class Solution {
public:
    int maxEnvelopes(vector<vector<int>>& envelopes) {
        
        if (envelopes.empty()) return 0;
    sort(envelopes.begin(), envelopes.end(),[](vector<int> &a,vector<int> &b){ //& is used for call by reference
        return (a[0]<b[0] || (a[0]==b[0] && (a[1]>b[1])));
    });
    vector<int> dp;
    
    for(auto i:envelopes)
    {
        auto itr=lower_bound(dp.begin(),dp.end(),i[1]);
        
        if(itr==dp.end())
        {
            dp.push_back(i[1]);
        }
        else if(i[1]<*itr)
        {
            *itr=i[1];
        }
    }
    return dp.size();
    }
};
