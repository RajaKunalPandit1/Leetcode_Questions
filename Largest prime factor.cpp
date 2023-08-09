Output Status : 

Problem Solved Successfully
You get marks only for the first correct submission if you solve the problem without viewing the full solution.
Test Cases Passed: 
1120 /1120
Your Total Score: 
2754
Total Time Taken: 
0.16
Correct Submission Count: 
2
Attempts No.: 
14

    long long int largestPrimeFactor(int N){
        
        int ans=2;
        
        while(N%2==0)
          N=N/2;
       
       for(int i=3;i<=N;i+=2){
           if(N%i==0){
               
               ans=i;
               while(N%i==0)
                N=N/i;
           }
       }
       
      return ans;          

    }
