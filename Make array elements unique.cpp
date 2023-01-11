Output Status : 

Problem Solved Successfully
Test Cases Passed: 
161 /161
Total Points Scored: 
4 /4
Your Total Score: 
1803
Total Time Taken: 
0.13
Your Accuracy: 
100%
Attempts No.: 
1

class Solution {
  public:
    long long int minIncrements(vector<int> arr, int N) {
        
        sort(arr.begin(),arr.end());
        
        int last = arr[0];
        
        int res = 0;
        
        for(int i=1;i<N;i++){
            while(arr[i] <= last){
                res++;
                arr[i]++;
            }
            last = arr[i];
        }
        return res;
    }
