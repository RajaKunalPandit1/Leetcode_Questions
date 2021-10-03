Output Status:

Runtime: 8 ms, faster than 95.23% of C++ online submissions for Two Sum.
Memory Usage: 10.4 MB, less than 62.41% of C++ online submissions for Two Sum.

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> v, ans;
		int lo = 0, hi = nums.size() - 1, n1, n2;
		v = nums;
		sort(nums.begin(), nums.end());
		while(lo < hi){
			if(nums[lo] + nums[hi] > target) hi--;
			else if(nums[lo] + nums[hi] < target) lo++;
			else{
				n1 = nums[lo], n2 = nums[hi];
				break;
			}
		}
		for(int i = 0 ; i < v.size() ; i++){
			if(v[i] == n1 || v[i] == n2){
				ans.push_back(i);
			}
			if(ans.size() == 2) break;
		}
		return ans;
    }
};
