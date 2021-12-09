Output Status: 

Runtime: 28 ms, faster than 99.20% of C++ online submissions for Jump Game III.
Memory Usage: 36.2 MB, less than 23.53% of C++ online submissions for Jump Game III.

class Solution {
public:
   bool ff(vector<int>& arr, vector<bool>& visited, int i) {
        if (i < 0 || i >= arr.size() || visited[i]) return false;
        if (arr[i] == 0) return true;
        visited[i] = true;
        return ff(arr, visited, i + arr[i]) || ff(arr, visited, i - arr[i]);
    }
    
    bool canReach(vector<int>& arr, int start) {
        vector<bool> visited(arr.size(), false);
        return ff(arr, visited, start);
    }
};
