Output Status : 

Runtime
54 ms
Beats
19.35%
Memory
36.5 MB
Beats
65.98%

class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int  n= nums.size() ;

        if(n ==1) {
            return  0;

        }
        int i =0 ; 
        int j =1;
        int zero =0 ;
        int ones =0 ;
        int len=0 ;
        int maxi =-1;

        while(j < n ) {
            if(nums[i] == 0 && ones >0 ) {
                zero ++ ;
            }
            if(nums[j] == 0 &&nums[i] == 0 ) {
                i ++ ;
                j++;
            }
            
            else if(nums[j] ==1 ) {
                len ++ ;
                j ++ ;
                ones ++ ;
            }
            else if(nums[j] ==0  && zero ==0 ) {
                j ++ ;
                len ++ ;
                zero ++ ;


            }  
            else if(nums[j] ==0 ) {
                i++;
                len -- ;
            }
            maxi = max(maxi, len );
        }
        return maxi ;

    }
};
