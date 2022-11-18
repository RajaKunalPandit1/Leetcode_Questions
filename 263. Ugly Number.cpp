Output Status : 

Runtime: 6 ms, faster than 26.78% of C++ online submissions for Ugly Number.
Memory Usage: 5.8 MB, less than 86.72% of C++ online submissions for Ugly Number.

class Solution {
public:
    bool isUgly(int n) {
        
        if(n == 0){
            return false;
        }
        
        if(n == 1){
            return true;
        }
        
        while(n%3 == 0 || n%2 == 0 || n%5 == 0){
            
            if(n%5 == 0){
                while(n%5 == 0){
                    n = n/5;
                }
            }else if(n%3 == 0){
                while(n%3 == 0){
                    n = n/3;
                }
            }else if(n%2 == 0){
                while(n%2 == 0){
                    n = n/2;
                }
            }
        }
        return (n == 1);
        
    }
};

// Another Simple Solution :: 

bool isUgly(int num) {
    if(num == 0) return false;
    
    while(num%2 == 0) num/=2;
    while(num%3 == 0) num/=3;
    while(num%5 == 0) num/=5;
    
    return num == 1;
}
