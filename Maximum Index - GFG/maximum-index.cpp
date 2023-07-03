//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
    int maxIndexDiff(int arr[], int n) {
        
        int nums[n];
        
        for(int i =0;i<n;i++){
            nums[i]=arr[i];
        }
        
        sort(nums,nums+n);
        
        int k = n-1;
        int answer = 0;
        int i = 0;
        int j = n-1;
        
        while(i<j){
            int diff = j-i;
            if(arr[i]<=arr[j]){
                answer = max(answer,diff);
                i++;
                j = n-1;
            }
            else if(arr[i]==nums[k]){
                k--;
                i++;
            }
            else {
                j--;
            }
        }
        return answer;
    }

};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.maxIndexDiff(a, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends