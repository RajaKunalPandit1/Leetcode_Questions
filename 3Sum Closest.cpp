class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
     
        sort(nums.begin(),nums.end());
        int close=1000000000;
        for(int i=0;i<nums.size()-2;i++)
        {
            int p1=i+1;
            int p2=nums.size()-1;
            while(p1<p2)
            {
                int sum = nums[i] + nums[p1] + nums[p2];
                if (abs(target - sum) < abs(target - close)) 
                {
				    close = sum;
                }
                if(sum>target)
                {
                    p2--;
                }
                else
                {
                    p1++;
                }
             }
        }
            return close;
        
    }
};

// Another Solution

class Solution {
public:
    
    int threeSumClosest(vector<int>& nums, int target) {
        
        sort(nums.begin(), nums.end());
        
        int fix = 0 ;
        int tmp = nums[0]+nums[1]+nums[2] ;
        
        while( fix < nums.size() - 2 ){
            
            int left = fix + 1;
            int right = nums.size() - 1 ;
            
            while ( left < right ){
                
                int sum = nums[fix] + nums[left] + nums[right];
                if ( abs(sum-target) < abs(tmp-target) ) tmp = sum;
                if ( sum > target ) right -= 1;
                else if ( sum < target ) left += 1;
                else return target;
                
            }
            
            fix += 1;
            
        }
        return tmp;
    }
};

// Another Solution

int threeSumClosest(vector<int>& nums, int target) {
    if(nums.size() < 3) return 0;
    int closest = nums[0]+nums[1]+nums[2];
    sort(nums.begin(), nums.end());
    for(int first = 0 ; first < nums.size()-2 ; ++first) {
        if(first > 0 && nums[first] == nums[first-1]) continue;
        int second = first+1;
        int third = nums.size()-1;            
        while(second < third) {
            int curSum = nums[first]+nums[second]+nums[third];
            if(curSum == target) return curSum;
            if(abs(target-curSum)<abs(target-closest)) {
                closest = curSum;
            }
            if(curSum > target) {
                --third;
            } else {
                ++second;
            }
        }
    }
    return closest;
}
