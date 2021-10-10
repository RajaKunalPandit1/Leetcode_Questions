Output Status:

Runtime: 4 ms, faster than 92.70% of C++ online submissions for Bitwise AND of Numbers Range.
Memory Usage: 6 MB, less than 30.76% of C++ online submissions for Bitwise AND of Numbers Range.


class Solution {
public:
    int rangeBitwiseAnd(int m, int n) {
        
          // edge case - zero AND anything will always stay zero
        if ((m == 0) || (n == 0)) return 0;
        
        // if there is a different amount of digits in binary - always will be zero
        if ((int)log2(m) != (int)log2(n)) return 0;
        
        // None of the above - not too many numbers left to calculate one by one...
        int res = m;
        for (long i = m; i <= n; i++)
            res &= i;
                
        return res;
        
    }
};

The code for the logarithmic approach (unsurprisingly blazingly faster than the linear approach above):

class Solution {
public:
    int rangeBitwiseAnd(int l, int r) {
        int count = 0;
        while (l && l != r) l >>= 1, r >>= 1, count++;
        return l << count;
    }
};
Same, but recursive because it's cooler:

class Solution {
public:
    int rangeBitwiseAnd(int l, int r) {
        return (l && l != r) ? (rangeBitwiseAnd(l >> 1, r >> 1) << 1) : l;
    }
};


class Solution {
public:
    int rangeBitwiseAnd(int l, int r) {
        int res = l;
        while (res && l < r) res &= ++l;
        return res;
    }
};
