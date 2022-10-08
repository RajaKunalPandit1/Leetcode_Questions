Output Status : 

Runtime: 550 ms, faster than 32.07% of C++ online submissions for 3Sum Closest.
Memory Usage: 16.2 MB, less than 84.20% of C++ online submissions for 3Sum Closest.


class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        
        int n = nums.size();
        
        if(n<3) return 0;
        
        sort(nums.begin(),nums.end());
        
        int sum = nums[0] + nums[1] + nums[2];
        
        int minDiff = abs(target-sum);
        
        for(int i=0;i<n-2;i++){
            
            if(i == 0 || (i>0 && nums[i] != nums[i-1])){
                
                int j= i+1,k = n-1;
                
                while(j<k){
                    
                    int var = nums[i] + nums[j] + nums[k];
                    
                    if(var == target){
                        return target;
                    }
                    
                    if(abs(target-var) < minDiff){
                        sum = var;
                        minDiff = abs(target-var);
                        
                        while(j<k && nums[j] == nums[j+1]) j++;
                        while(j<k && nums[k] == nums[k-1]) k--;
                   
                    }
                    if(var > target){
                        k--;
                    }else{
                        j++;
                    }
                }
            }
        }
        return sum;
    }
};
