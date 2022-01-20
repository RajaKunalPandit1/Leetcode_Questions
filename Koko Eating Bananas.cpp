Output Status: 

Runtime: 90 ms, faster than 14.69% of C++ online submissions for Koko Eating Bananas.
Memory Usage: 18.8 MB, less than 53.71% of C++ online submissions for Koko Eating Bananas.

class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int H) {
         int low = 1, high = 1000000000, k = 0;
        while (low <= high) {
            k = (low + high) / 2;
            int h = 0;
            for (int i = 0; i < piles.size(); i ++) 
                h += ceil(1.0 * piles[i] / k);
            if (h > H)
                low = k + 1;
            else
                high = k - 1;
        }
        return low;
    }
};
