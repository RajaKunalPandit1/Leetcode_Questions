Output Status: 

Runtime: 0 ms, faster than 100.00% of C++ online submissions for Number of Steps to Reduce a Number to Zero.
Memory Usage: 6 MB, less than 26.66% of C++ online submissions for Number of Steps to Reduce a Number to Zero.


class Solution {
public:
    int numberOfSteps(int num) {  // Time: O(logN) :: Aux_Space : O(1)
        
        int res = 0;
        
        while(num>0){
            
            if(num%2 == 0){
                num = num/2;
                res++;
            }else{
                num--;
                res++;
            }
        }
        
        return res;
        
    }
};

// Another Solution 

class Solution {
public:
    int numberOfSteps (int num) {
        return num ? log2(num) + bitset<32>(num).count() : 0;
    }
};
