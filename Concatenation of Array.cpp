// Output Status:

// Runtime: 4 ms, faster than 98.70% of C++ online submissions for Concatenation of Array.
// Memory Usage: 13 MB, less than 17.96% of C++ online submissions for Concatenation of Array.

class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        
        
        int n = nums.size();
        vector<int> res;
        for(int i=0;i<2*n;i++){
           res.push_back(nums[i%n]);
   
        }
        
        return res;
        
    }
};

// Another Solution 

class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int>ans;
        for(int i=0;i<nums.size();i++)
        {
            ans.push_back(nums[i]);
        }
        for(int i=0;i<nums.size();i++)
        {
            ans.push_back(nums[i]);
        }
        return ans;
    }
};

// Another Solution 

class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n=nums.size();
       for(int i=0;i<n;i++)
       {
           nums.push_back(nums[i]);
       }
        return nums;
    }
}

// Another Solution 

 vector<int> getConcatenation(const vector<int>& nums) {
        vector<int> res;
        res.reserve(nums.size() * 2);
    
        copy(cbegin(nums), cend(nums), back_inserter(res));
        copy(cbegin(nums), cend(nums), back_inserter(res));
                     
        return res;
    }
