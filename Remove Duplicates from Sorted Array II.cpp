Output Status:

Runtime: 4 ms, faster than 86.50% of C++ online submissions for Remove Duplicates from Sorted Array II.

Memory Usage: 10.8 MB, less than 74.56% of C++ online submissions for Remove Duplicates from Sorted Array II. 

class Solution {

public:

    int removeDuplicates(vector<int>& nums) {

Memory Usage: 10.8 MB, less than 74.56% of C++ online submissions for Remove Duplicates from Sorted Array II
        int i = 0;

    for (int n : nums)

        if (i < 2 || n > nums[i-2])

            nums[i++] = n;

    return i;

    }

};
