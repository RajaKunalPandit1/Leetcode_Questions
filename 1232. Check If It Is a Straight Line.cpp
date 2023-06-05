Output Status : 

Runtime
7 ms
Beats
90.62%
Memory
10.1 MB
Beats
29.11%

class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& cord) {
        
        int x0 = cord[0][0];
        int y0 = cord[0][1];
        int x1 = cord[1][0];
        int y1 = cord[1][1];

        for(int i=2;i<cord.size();i++){

            int x = cord[i][0];
            int y = cord[i][1];

            if((x-x0) * (y1-y0) != (y-y0) * (x1-x0)){
                return false;
            }
        }
        return true;
    }
};
