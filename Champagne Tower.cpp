Output Status: 

Runtime: 15 ms, faster than 53.42% of C++ online submissions for Champagne Tower.
Memory Usage: 6.4 MB, less than 68.10% of C++ online submissions for Champagne Tower.
Next challenges:


class Solution {
public:
    double champagneTower(int poured, int query_row, int query_glass) {
         vector<double> res(101);
        res[0] = poured;
        for (int row = 1; row <= query_row; row++)
            for (int i = row; i >= 0; i--) {
                res[i] = max(0.0, (res[i] - 1) / 2);
                res[i + 1] += res[i];
            }
                
        return min(res[query_glass], 1.0); 
    }
};

