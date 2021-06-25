class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
           if(nums.size() < 3) return {};
        vector<vector<int>> ret;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;++i){
            if(i>0 && nums[i] == nums[i-1]) continue;
            int tar = 0 - nums[i],hi=nums.size()-1,lo=i+1;
            while(hi>lo){
                int summ = nums[hi]+nums[lo];
                if(summ > tar)
                    hi--;
                else if(summ < tar)
                    lo++;
                else{
                    ret.push_back({nums[i],nums[lo],nums[hi]});
                    lo++,hi--;
                    while(hi>lo && nums[hi]==nums[hi+1]) hi--;
                    while(hi>lo && nums[lo]==nums[lo-1]) lo++;
                }    
            }
        }
        return ret;   
    }
};

// Another Solution

vector<vector<int>> threeSum(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    vector<vector<int>> res;
    for (unsigned int i=0; i<nums.size(); i++) {
        if ((i>0) && (nums[i]==nums[i-1]))
            continue;
        int l = i+1, r = nums.size()-1;
        while (l<r) {
            int s = nums[i]+nums[l]+nums[r];
            if (s>0) r--;
            else if (s<0) l++;
            else {
                res.push_back(vector<int> {nums[i], nums[l], nums[r]});
                while (nums[l]==nums[l+1]) l++;
                while (nums[r]==nums[r-1]) r--;
                l++; r--;
            }
        }
    }
    return res;
}
