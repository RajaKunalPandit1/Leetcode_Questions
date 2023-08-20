//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Item{
    int value;
    int weight;
};


// } Driver Code Ends
//class implemented
/*
struct Item{
    int value;
    int weight;
};
*/


class Solution
{
    public:
    
    static bool comp(Item t1, Item t2){
        
        double r1 = double(t1.value)/double(t1.weight);
        double r2 = double(t2.value)/double(t2.weight);
        
        return r1>r2;
    }
    
    double fractionalKnapsack(int W, Item arr[], int n)
    {
        
        sort(arr,arr+n,comp);
        
        int curr_wt = 0;
        double res = 0.0;
        
        for(int i=0;i<n;i++){
             
            if(curr_wt + arr[i].weight <= W){
                curr_wt += arr[i].weight;
                res += arr[i].value;
            }else{
                
                int remain = W-curr_wt;
                res += (arr[i].value/(double)arr[i].weight)*(double)remain;
                break;
            }
        }
        return res;
    }
        
};


//{ Driver Code Starts.
int main()
{
	int t;
	//taking testcases
	cin>>t;
	cout<<setprecision(2)<<fixed;
	while(t--){
	    //size of array and weight
		int n, W;
		cin>>n>>W;
		
		Item arr[n];
		//value and weight of each item
		for(int i=0;i<n;i++){
			cin>>arr[i].value>>arr[i].weight;
		}
		
		//function call
		Solution ob;
		cout<<ob.fractionalKnapsack(W, arr, n)<<endl;
	}
    return 0;
}
// } Driver Code Ends