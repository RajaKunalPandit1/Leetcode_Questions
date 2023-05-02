Output Status : 

Runtime
0 ms
Beats
100%
Memory
10.1 MB
Beats
86.28%

class Solution {
public:
    int arraySign(vector<int>& nums) {
        
        int n = nums.size();

        int flag = 1;

        for(int i=0;i<n;i++){
            if(nums[i] == 0){
                return 0;
            }else if(nums[i] < 0){
                flag = -flag;
            }
        }
        return (flag < 0)?-1:1;
    }
};
