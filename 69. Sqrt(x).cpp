Output Status : 

Runtime: 7 ms, faster than 33.59% of C++ online submissions for Sqrt(x).
Memory Usage: 5.9 MB, less than 73.32% of C++ online submissions for Sqrt(x).


//   Time : O(logX) :: Aux_Space : O(1)
  
class Solution {
public:
    int mySqrt(int x) {
        
        if(x == 1) return 1;
        
        if(x == 0) return 0;
        
        int low = 1,high = x;
        
        long long ans = 0;
        int res = 1;
        
        while(low <= high){
            
            long long mid = low + (high-low)/2;
            ans = mid*mid;
            
            if(ans == x){
                return mid;
            }else if(ans > x){
                high = mid-1;
            }else{
                res = mid;
                low = mid+1;
            }
        }
        return res;
    }
};

// Another Solution Using Newton Method.

    long r = x;
    while (r*r > x)
        r = (r + x/r) / 2;
    return r;

// Solution Using Bit Manipulation

public int sqrt(int x) {
    long ans = 0;
    long bit = 1l << 16;
    while(bit > 0) {
        ans |= bit;
        if (ans * ans > x) {
            ans ^= bit;
        }
        bit >>= 1;
    }
    return (int)ans;
}

