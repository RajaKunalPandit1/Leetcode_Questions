Output Status :

Runtime: 0 ms, faster than 100.00% of C++ online submissions for Mirror Reflection.
Memory Usage: 5.8 MB, less than 62.81% of C++ online submissions for Mirror Reflection.

// Time : O(logP) :: Aux_Space : O(1)

class Solution {
public:
    int mirrorReflection(int p, int q) {
        
        int ext = q, reflection = p;
        
        while(ext%2 == 0 && reflection %2 == 0){
            ext/=2;
            reflection /= 2;
        }
        
        if(ext%2 == 0 && reflection %2 != 0) return 0;
        if(ext%2 == 1 && reflection %2 != 0) return 1;
        if(ext%2 == 1 && reflection %2 == 0) return 2;
        
        return -1;
    }
};
