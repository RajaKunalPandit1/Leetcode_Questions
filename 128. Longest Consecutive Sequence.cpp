Output Status : 

Runtime: 1230 ms, faster than 9.00% of C++ online submissions for Longest Consecutive Sequence.
Memory Usage: 49.8 MB, less than 35.75% of C++ online submissions for Longest Consecutive Sequence.

// Naive Solution : Simply Sorting and then Travering the Array :: Time : O(NlogN) + O(N) :: Aux_Space : O(1)


class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        int n = nums.size();
        
        if(n == 0){
            return 0;
        }
        
        sort(nums.begin(),nums.end());
        
        
        int max_len = 1,cnt = 1;
        
        for(int i=1;i<n;i++){
            
            if(nums[i]-nums[i-1] == 1){
                cnt++;
                max_len = max(max_len,cnt);
            }else if(nums[i] == nums[i-1]){
                   continue;
            }else{
                cnt = 1;
            }
        }
        return max_len;
    }
};

// Efficient Solution :: Time : O(3N) :: Aux_Space : O(N)


class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        int n = nums.size();

        unordered_set<int> s;

        for(int i=0;i<n;i++){
            s.insert(nums[i]);
        }

        int max_len = 0;

        for(int i=0;i<n;i++){

            if(!s.count(nums[i]-1)){
                int currele = nums[i];
                int res =1;

                while(s.count(currele+1)){
                    currele++;
                    res++;
                }
                max_len = max(max_len,res);
            }
        }
        return max_len;
    }
};
