Output Status:

104 / 104 test cases passed.
Status: Accepted
Runtime: 4 ms
Memory Usage: 9.7 MB


class Solution {
public:
    
    bool isEven(int n){
        int res =0;
        while(n!=0){
            n = n/10;
            res++;
        }
        if(res%2 == 0){
            return true;
        }else{
            return false;
        }
    }
    
    int findNumbers(vector<int>& nums) {
        
        int n =nums.size();
        int res  =0;
        
        for(int i=0;i<n;i++){
            if(isEven(nums[i])){
                res++;
            }
        }
        return res;
    }
};
