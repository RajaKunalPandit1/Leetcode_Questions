Output Status : 

Runtime: 0 ms, faster than 100.00% of C++ online submissions for Poor Pigs.
Memory Usage: 6.2 MB, less than 22.55% of C++ online submissions for Poor Pigs.

class Solution {
public:
    int poorPigs(int buckets, int minutesToDie, int minutesToTest) {
        
        int pigs =0;
        
        while(pow((minutesToTest/minutesToDie + 1),pigs)< buckets){pigs++;}
        
        return pigs;
    }
};
