Output Status : 

Runtime
94 ms
Beats
66.7%
Memory
54.6 MB
Beats
42.4%

class Solution {
public:
    long long minimumReplacement(vector<int>& nums) {
        int n = nums.size();
        int last = nums[n-1];  // Initialize 'last' with the last element
        long long ans = 0;     // Initialize the total operations count

        // Traverse the array in reverse order
        for (int i = n - 2; i >= 0; --i) {
            if (nums[i] > last) {  // If the current element needs replacement
                int t = nums[i] / last;  // Calculate how many times the element needs to be divided
                if (nums[i] % last) t++; // If there's a remainder, increment 't'
                last = nums[i] / t;  // Update 'last' for the next comparison
                ans += t - 1; // Add (t - 1) to 'ans' for the number of operations
            } else {
                last = nums[i]; // Update 'last' without replacement
            }
        }
        return ans; // Return the total number of operations
    }

};
