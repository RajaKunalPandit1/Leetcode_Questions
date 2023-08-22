//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution
{
    public:
    //Function to find minimum number of operations that are required 
    //to make the matrix beautiful.
    int findMinOpeartion(vector<vector<int> > matrix, int n)
    {
        int rowsum,colsum;
        
        vector<int>temp1,temp2;
        
        for(int i=0;i<n;i++){
            
            colsum=0,rowsum=0;
            
            for(int j=0;j<n;j++){
                
                rowsum=rowsum+matrix[i][j]; //each row sum
                colsum=colsum+matrix[j][i]; //each col sum
            
            }
            
            temp1.push_back(rowsum);        //temporary row sum vector
            temp2.push_back(colsum);        //temporary col sum vector
        }
        
        int sum1=0,sum2=0;
        
        int maxi1= *max_element(temp1.begin(),temp1.end()); 
        int maxi2= *max_element(temp2.begin(),temp2.end());
        
        for(auto it:temp1){
            sum1=sum1+(maxi1-it);
        }
        
        for(auto it:temp2){
            sum2=sum2+(maxi2-it);
        }
        
        return sum1>sum2?sum1:sum2;
    } 
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<vector<int> > matrix (n,vector<int>(n));
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                cin>>matrix[i][j];
        Solution ob;
        cout << ob.findMinOpeartion(matrix, n) << endl;
    }
    return 0;
}


// } Driver Code Ends