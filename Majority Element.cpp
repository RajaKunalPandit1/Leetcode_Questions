// Here I'm Using Moore's Voting Algorithm

int majorityElement(vector<int> &num) {
    int majorityIndex = 0;
    for (int count = 1, i = 1; i < num.size(); i++) {
        num[majorityIndex] == num[i] ? count++ : count--;
        if (count == 0) {
            majorityIndex = i;
            count = 1;
        }
    }
        
    return num[majorityIndex];
}

// Another Solution

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        int n= nums.size();
        int maj = n/2;
        
        sort(nums.begin(),nums.end());
   
         return (nums[maj]);
    }
};
