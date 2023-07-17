//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution{
    public:
    /*You are required to complete this method*/
     int max_path_sum(int arr[], int brr[], int l1, int l2)
    {
        
        int res = 0,s1 = 0,s2 = 0;
        int i=0,j=0;
        
        while(i< l1 && j< l2){
            
            if(arr[i] < brr[j]){
                s1 += arr[i++];
            }else if(arr[i] > brr[j]){
                s2 += brr[j++];
            }else{
                
                res += max(s1,s2) + arr[i];
                i++;
                j++;
                s1 = s2 = 0;
            }
        }
        
        while(i < l1){
            s1 += arr[i++];
        }
        
        while(j < l2){
            s2 += brr[j++];
        }
        
        res += max(s1,s2);
        return res;
    }
};

//{ Driver Code Starts.

int main()
{
    int T;
    cin>>T;

    while(T--)
    {
        int N,M;
        cin>>N>>M;
        fflush(stdin);
        int a[N],b[M];
        for(int i=0;i<N;i++)
            cin>>a[i];
        for(int i=0;i<M;i++)
            cin>>b[i];
        Solution obj;
        int result = obj.max_path_sum(a,b,N,M);
        cout<<result<<endl;
    }
}


// } Driver Code Ends