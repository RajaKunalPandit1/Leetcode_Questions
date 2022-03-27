Output Status: 

Runtime: 24 ms, faster than 20.00% of C++ online submissions for The K Weakest Rows in a Matrix.
Memory Usage: 10.6 MB, less than 42.57% of C++ online submissions for The K Weakest Rows in a Matrix.

class Solution {
public:
    
    vector<int> Weakest(vector<vector<int> >& mat, int k)
    {
       
        int n = mat.size();
        

        set<pair<int,int> > s;
        
        
        
        for(int i = 0; i<n; ++i)
        {
           
            int cnt = count(mat[i].begin(),mat[i].end(),1);
           
            s.insert({cnt,i});
        }
        
        vector<int> ans;
        
        for(auto i : s)
        {
            if(k == 0)
                break;
            ans.push_back(i.second);
            --k;
        }
        
        return ans;
    }
    
    
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {

        return Weakest(mat,k);
        
    }
	
};
