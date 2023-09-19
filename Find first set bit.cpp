Output Status : 

Problem Solved Successfully
You get marks only for the first correct submission if you solve the problem without viewing the full solution.
Test Cases Passed: 
1120 /1120
Your Total Score: 
2851
Total Time Taken: 
0.01
Correct Submission Count: 
4
Attempts No.: 
4

unsigned int getFirstSetBit(int n)
    {
        return log2(n & -n) + 1;
    }
