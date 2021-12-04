Output Status: 

By Rajakunalpandit, contest: Codeforces Round #105 (Div. 2), problem: (A) Insomnia cure, Accepted


#include <iostream>
#include <string>
#include <algorithm>
#include <map>
#include <vector>
#include <unordered_set>
#include <cctype>
#define ll long long int
#define endl "\n"
using namespace std;


int32_t main() {
	
	ios::sync_with_stdio(false);
	cin.tie(0);
    
    ll k,l,m,n,d;
    
    cin >> k >> l >> m >> n >> d;
    
    ll res =0;
    
    for(int i=1;i<=d;i++){
        if(i%k == 0 || i%l == 0 || i%m == 0 || i%n == 0){
            res++;
        }
    }
    
    cout<< res << endl;
    
	return 0;
}
