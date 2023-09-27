//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution{
    public:
    // arr[] : int input array of integers
    // k : the quadruple sum required
    vector<vector<int> > fourSum(vector<int> &arr, int k) {
         vector<vector<int>> out = {};
        int n = arr.size();
        sort(arr.begin(),arr.end());
        for(int i=0 ; i<n ; i++)
        {
            if(i==0 || arr[i]!=arr[i-1])
            {
                for(int j=i+1 ; j<n ; j++)
                {
                    if(j==i+1 || arr[j]!=arr[j-1])
                    {
                        int left=j+1 , right=n-1;
                        while(left < right)
                        {
                            if((arr[left]+arr[right]+arr[i]+arr[j]) < k) left++;
                            else if((arr[left]+arr[right]+arr[i]+arr[j]) > k) right--;
                            else
                            {
                                if((left==j+1 || arr[left]!=arr[left-1])&&(right==n-1 || arr[right]!=arr[right+1]))
                                {
                                    out.push_back({arr[i],arr[j],arr[left],arr[right]});
                                }
                                left++;
                            }
                        }
                    }
                }
            }
        }
        
        return out;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, i;
        cin >> n >> k;
        vector<int> a(n);
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        vector<vector<int> > ans = ob.fourSum(a, k);
        for (auto &v : ans) {
            for (int &u : v) {
                cout << u << " ";
            }
            cout << "$";
        }
        if (ans.empty()) {
            cout << -1;
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends