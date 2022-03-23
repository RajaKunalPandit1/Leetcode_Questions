Output Status: 

Runtime: 0 ms, faster than 100.00% of C++ online submissions for Broken Calculator.
Memory Usage: 5.9 MB, less than 73.18% of C++ online submissions for Broken Calculator.


class Solution {   // Time : O(log(Target))  :: Aux_Space: O(1);
public:
    int brokenCalc(int startValue, int target) {
        
        int res = 0;
        
        while(startValue < target){
         
            if(target%2 == 0){
                target /= 2;
                res++;
            }else{
                target++;
                res++;
            }   
        }
        return res + startValue-target;
        
    }
};


// Another Solution 

class Solution {
public:
    int brokenCalc(int startValue, int target) {
        
        if(startValue >= target){
            return startValue-target;
        }
        
        if(target%2 == 0){
            return 1 + brokenCalc(startValue,target/2);
        }else{
            return 1 + brokenCalc(startValue,target+1);
        }
        
        
    }
};
