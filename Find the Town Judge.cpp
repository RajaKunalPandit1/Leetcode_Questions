Output Status: 

Runtime: 210 ms, faster than 24.77% of C++ online submissions for Find the Town Judge.
Memory Usage: 68.9 MB, less than 20.00% of C++ online submissions for Find the Town Judge.

class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        if(trust.empty() && n==1)
            return 1;
		
		//counts outdegree of a person or node 
		//outdegree means number of nodes that are trusted by given specific node 
        
		vector<int> out(n+1,0);
		
		//counts indegree of a person or node 
		//indegree means number of nodes that trusts a given specific node
        
		vector<int> in(n+1,0);
		
		//loop counts indegree and outdegree
        
		for(auto edge : trust){
            out[edge[0]]++;
            in[edge[1]]++;
        }
		
		//if a node has outdegree==0 that means that node doesnot trust anyone and
		//indegree ==n-1 that means all other nodes trusts this node except himself
        
		for(int i=0;i<=n;i++){
            if(out[i]==0 && in[i]==n-1)
                return i;
        }
		//if there is no such node return -1
        return -1;
    }
};
