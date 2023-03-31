Output Status : 

Problem Solved Successfully
Test Cases Passed: 
1115 /1115
Total Points Scored: 
4 /4
Your Total Score: 
2123
Total Time Taken: 
0.83
Your Accuracy: 
100%
Attempts No.: 
1

class Solution
{
    public:
        vector <int> lexicographicallyLargest(vector <int> &a,int n)
        {
            int count=0;
            int c=2;
            for(int i=0;i<n-1;)
            {
                if((a[i]+a[i+1])%2==0)
                {
                    if(a[i]<a[i+1])
                    {
                        swap(a[i],a[i+1]);
                        if(i!=0)
                        {
                            i--;
                        }
                    }
                    else
                    {
                        i++;
                    }
                }
                else
                    i++;
            }
            return a;
        }
};
