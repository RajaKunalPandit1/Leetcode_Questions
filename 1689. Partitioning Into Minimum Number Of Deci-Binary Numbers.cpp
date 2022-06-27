Output Status: 

Runtime: 37 ms, faster than 68.75% of C++ online submissions for Partitioning Into Minimum Number Of Deci-Binary Numbers.
Memory Usage: 13.6 MB, less than 17.75% of C++ online submissions for Partitioning Into Minimum Number Of Deci-Binary Numbers.

class Solution {
public:
    int minPartitions(string n) {
        
        int sz = n.size();
        int res = INT_MIN;
        
        for(int i=0;i<sz;i++){
            res = max(res,n[i]-'0');
        }
        return res;
        
    }
};

// Another Solution 

 int minPartitions(string n) {
        return *max_element(begin(n), end(n)) - '0';
}
