Output Status: 


Runtime: 0 ms, faster than 100.00% of C++ online submissions for Complement of Base 10 Integer.
Memory Usage: 6 MB, less than 5.99% of C++ online submissions for Complement of Base 10 Integer.


class Solution {
public:
    int bitwiseComplement(int n) {
          int sum=0,i=0;
        if(n==0)
          return 1;  
        while(n>0)
        {
            if(n%2==0)
            {
                sum+=1*pow(2,i);
                i++;
                n=n/2;
            }
            else
            {
                 i++;
                    n=n/2;
            }
        }
        return sum;
    }
};
