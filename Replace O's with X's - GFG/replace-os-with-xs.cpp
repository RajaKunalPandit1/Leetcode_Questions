//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
 void dfs( int row , int col , vector<vector<int>> &vis ,vector<vector<char>> &mat , int delrow[] , int delcol[] ){
           
           
           // first mark visited 
           vis[row][col]=1;
           
           int n = mat.size();
           int m = mat[0].size();
           
           
           //  check for direction (top , right , bottom , left)
           
           for( int i  = 0 ; i < 4 ; i++){
               
               int newrow = row + delrow[i];
               int newcol = col + delcol[i];
               
               // check for boundary cases
               
 if( newrow >= 0 && newrow < n && newcol>= 0 && newcol < m  && !vis[newrow][newcol]&& mat[newrow][newcol] == 'O'){
              
              // check is connected to any 'O'
              
              dfs(newrow , newcol , vis , mat , delrow , delcol);
               }
           }
           
           
           
       }
public:
    vector<vector<char>> fill(int n, int m, vector<vector<char>> mat)
    {
       
       //  create the array to traverse in four direction
        int delrow[] = {-1 , 0 , 1 , 0};  // top right buttom left 
        int delcol[] = { 0 , 1 , 0, -1 }; 
        
        // visited vector to keep the track 
        
        vector<vector<int>> vis( n , vector<int>(m,0)); 
        
        
        //  check part 
         
           // first row and last row check if O is connected to any edges
        for( int j = 0  ; j < m ; j++){
            
            // first row 
            if(!vis[0][j] && mat[0][j]=='O'){
                
                dfs(0 , j , vis , mat , delrow , delcol);
            }
            
            
            // last row
            
            if(!vis[n-1][j] && mat[n-1][j] == 'O'){
                dfs(n-1 , j , vis , mat , delrow , delcol);
            }
            
        }
        
        
        // check part 
        // first col and last col  to check if O is connected to any edges
        
        
        for( int i = 0 ; i < n ; i++){
            
            // first col 
            if(!vis[i][0] && mat[i][0] == 'O'){
                dfs(i , 0 , vis , mat , delrow , delcol);
            }
            
            
            if(!vis[i][m-1] && mat[i][m-1] == 'O'){
                dfs(i , m-1 , vis , mat , delrow , delcol);
            }
        }
        
        
        
        // After this we can say that we have mark 'O' which is connected to edges or group of 'O'
         // now replace rest of 'O' with X because it is not connected to edges
         // and we say  the rest 'O' is Surrounded with 'X'
         for( int i = 0 ; i < n ; i++){
              for(int j  = 0 ; j < m ; j++){
                  
                  if(!vis[i][j] && mat[i][j] == 'O'){
                      mat[i][j] = 'X';
                  }
              }
         }
        
        
       return mat;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        vector<vector<char>> mat(n, vector<char>(m, '.'));
        for(int i = 0;i < n;i++)
            for(int j=0; j<m; j++)
                cin>>mat[i][j];
        
        Solution ob;
        vector<vector<char>> ans = ob.fill(n, m, mat);
        for(int i = 0;i < n;i++) {
            for(int j = 0;j < m;j++) {
                cout<<ans[i][j]<<" ";
            }
            cout<<"\n";
        }
    }
    return 0;
}
// } Driver Code Ends