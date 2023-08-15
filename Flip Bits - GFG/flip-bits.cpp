//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
    public:
    int maxOnes(int a[], int n)
    {
        int localans=0, globalans=0, onescnt=0;
        
        for(int i=0; i<n ;i++){
            if(a[i]==1){
                onescnt++;
            }
            
            if(a[i]==0){
                localans++;
            }else{
                localans--;
            }
            globalans= max(globalans, localans);
            if(localans<0){
                localans=0;
            }
        }
        
        return globalans+onescnt;
    }
};


//{ Driver Code Starts.
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n+5];
        for(int i=0;i<n;i++)
            cin>>a[i];
        Solution ob;
        cout<< ob.maxOnes(a, n) <<endl;
    }
    return 0;
}

// } Driver Code Ends