Output Status : 

Problem Solved Successfully
You get marks only for the first correct submission if you solve the problem without viewing the full solution.
Test Cases Passed: 
163 /163
Your Total Score: 
1861
Total Time Taken: 
0.96
Correct Submission Count: 
2
Attempts No.: 
2

class Solution
{
    public:
    //Function to perform case-specific sorting of strings.
    string caseSort(string str, int n)
    {
        string up = "";
        string lo = "";
        string res = "";
        for(int i = 0;i < n;i++){
            if(str[i] >= 'a' && str[i] <= 'z')
                lo += str[i];
            else
                up+= str[i];
        }
        sort(up.begin(),up.end());
        sort(lo.begin(),lo.end());
        int u = 0;
        int l = 0;
        for(int i = 0;i < n;i++){
            if(str[i] >= 'a' && str[i] <= 'z')
                res += lo[l++];
            else
                res += up[u++];
        }
        return res;
    }
};
