Output Status : 

Runtime
67 ms
Beats
88.24%
Memory
41.1 MB
Beats
92.58%

// Naive Sol :: Time : O(N) :: Aux_Space : O(N)

class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        
        int n = nums.size();

        unordered_map<int,int> mp;

        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }

        for(int i=1;i<=n;i++){
            if(mp[i] == 0){
                return i;
            }
        }
        return n+1;
    }
};

// Efficient Sol :: Time : O(N) :: Aux_Space : O(1)

class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        
        int n = nums.size();

        for(int i=0;i<n;i++){

            int ele = nums[i];

            if(ele >= 1 && ele <=n){
                int pos = ele-1;
                if(nums[pos] != ele){
                    swap(nums[pos],nums[i]);
                    i--;
                }
            }
        }

        for(int i=0;i<n;i++){
            if(i+1 != nums[i]){
                return i+1;
            }
        }
        return n+1;
    }
};
