Output Status : 

Problem Solved Successfully
Test Cases Passed: 
128 /128
Total Points Scored: 
4 /4
Your Total Score: 
1887
Total Time Taken: 
0.02
Your Accuracy: 
100%
Attempts No.: 
1

class Solution {
  public:
    int minRepeats(string a, string b) {
        
        string rep = a;
        int cnt = 1;
        
        while(a.size() < b.size()){
            a += rep;
            cnt++;
        }
        
        if(a.find(b) != -1){
            return cnt;
        }
        
        a += rep;
        cnt++;
        if(a.find(b) != -1){
            return cnt;
        }
        return -1;
    }
};
