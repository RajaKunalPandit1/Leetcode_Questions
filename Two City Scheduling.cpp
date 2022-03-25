Output Status: 

Runtime: 8 ms, faster than 42.77% of C++ online submissions for Two City Scheduling.
Memory Usage: 7.7 MB, less than 94.48% of C++ online submissions for Two City Scheduling.


class Solution {
public:
    
   static bool compare(vector<int> &a, vector<int> &b){
        return a[1]-a[0] > b[1]-b[0];
    }
    
    int twoCitySchedCost(vector<vector<int>>& costs) {
        
        int n = costs.size();
        
        sort(costs.begin(),costs.end(),compare);
        
        int res = 0;
        
        for(int i=0;i<n;i++){
            if(i<n/2){
                res += costs[i][0];
            }else{
                res += costs[i][1];
            }
        }
        return res;
    }
};


// Another Solution 


class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
        vector<int> diff;
        int mincost = 0;
        
        for(int i = 0; i<costs.size(); ++i)
        {
			// cost to send every person to city A
            mincost += costs[i][0];
			// computing difference if person sent to city B
            diff.push_back(costs[i][1] - costs[i][0]);
        }
		
		// sort the diff vector
        sort(diff.begin(),diff.end());
        
		// picking n persons having least diff
		// sending them to city B
        for(int i=0; i<costs.size()/2; ++i)
        {
            mincost += diff[i];
        }
        
        return  mincost;
        
    }
	// for github repository link go to my profile.
};
