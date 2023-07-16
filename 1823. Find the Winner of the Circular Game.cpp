Output Status : 

Runtime
0 ms
Beats
100%
Memory
5.9 MB
Beats
97.5%

class Solution {
public:
    int jos(int n, int k){

        if(n == 1) return 0;
        return (jos(n-1,k)+k)%n;
    }

    int findTheWinner(int n, int k) {
        return jos(n,k) + 1;
    }
};

// Iterative Sol :: 

class Solution {
public:
    int helper(int n,int k){
        int ans = 0;
        for(int i=1; i<=n; i++){
            ans = (ans + k) % i;
        }
        return ans;
    }
    int findTheWinner(int n, int k) {
        return helper(n,k)+1;   //+1 is for conterting 0-based indexing to 1-based indexing
    }
};
