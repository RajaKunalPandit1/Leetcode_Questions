Output Status: 

Runtime: 0 ms, faster than 100.00% of C++ online submissions for Number Complement.
Memory Usage: 5.8 MB, less than 77.70% of C++ online submissions for Number Complement.


class Solution {
public:
    int findComplement(int num) {
        unsigned mask = ~0;
        while( mask & num ) mask = mask << 1;
        return ~num ^ mask;
    }
};
