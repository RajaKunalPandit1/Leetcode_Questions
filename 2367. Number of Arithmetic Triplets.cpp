Output Status : 

104 / 104 test cases passed.
Status: Accepted
Runtime: 262 ms
Memory Usage: 8.4 MB
Submitted: 2 minutes ago


// Naive Solution :: Time : O(N^3) :: Aux_Space : O(1)

class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        
        int n = nums.size();
        int res = 0;
        
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                for(int k = j+1;k<n;k++){
                    
                    if(nums[j] - nums[i] == diff && nums[k] - nums[j] == diff){
                        res++;
                    }
                }
            }
        }
        return res;
    }
};

// Better Solution :: Time : O(N^2) :: Aux_Space : O(1)

class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        
        int n = nums.size();
        int count = 0;
        
        set<int> s;
        
        for(int i=0;i<n;i++){
            
            s.insert(nums[i]);
            
            for(int j=i+1;j<n;j++){
                if(nums[j] - nums[i] == diff && s.find(nums[i]-diff) != s.end()){
                    count++;
                }
            }
        }
        return count;
    }
};

// Efficient Solution :: Time : O(N) :: Aux_Space : O(1)

int arithmeticTriplets(vector<int>& nums, int diff) {
    int cnt[201] = {}, res = 0;
    for (auto n : nums) {
        if (n >= 2 * diff)
            res += cnt[n - diff] && cnt[n - 2 * diff];
        cnt[n] = true;
    }
    return res;
}
