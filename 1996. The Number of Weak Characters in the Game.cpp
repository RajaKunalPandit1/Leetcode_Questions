Output Status : 

Runtime: 1655 ms, faster than 5.05% of C++ online submissions for The Number of Weak Characters in the Game.
Memory Usage: 125.1 MB, less than 70.41% of C++ online submissions for The Number of Weak Characters in the Game.

class Solution {
public:
    
    static bool cmp(vector<int> &a, vector<int> &b){
        
        if(a[0] == b[0]){
            return a[1]>b[1];
        }
        return a[0]<b[0];
    }
    
    int numberOfWeakCharacters(vector<vector<int>>& prop) {
        
        sort(prop.begin(),prop.end(),cmp);
        
        int mtn = INT_MIN;
        int res = 0;
        
        for(int i = prop.size() - 1;i>=0;i--){
            
            if(prop[i][1] < mtn){
                res++;
            }
            mtn = max(mtn,prop[i][1]);
        }
        return res;
    }
};
