Output Status : 

Runtime
0 ms
Beats
100%
Memory
8.2 MB
Beats
8.24%

class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        
        int n = gain.size();

        vector<int> v(n+1,0);
        v[0] = 0;
        v[1] = gain[0]-v[0];


        for(int i=1;i<n;i++){
            v[i+1] = v[i] + gain[i];
        }

        int res = INT_MIN;

        for(int i=0;i<n+1;i++){
            res = max(res,v[i]);
        }
        return res;
    }
};

// Another Solution :: 

class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        
        int n = gain.size();

        int temp = 0;
        int res = 0;


        for(int i=0;i<n;i++){
            temp = temp + gain[i];
            res = max(res,temp);
        }

        return res;
    }
};
