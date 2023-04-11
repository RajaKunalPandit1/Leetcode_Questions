Output Status : 

Runtime
97 ms
Beats
40.70%
Memory
27 MB
Beats
44.3%

class Solution {
public:
    string removeStars(string s) {

     int n = s.size();

     stack<char> st;
     string res = "";

     for(int i=0;i<n;i++){
         if(s[i]  != '*'){
             st.push(s[i]);
         }else{
             st.pop();
         }
     }

     while(!st.empty()){
         res += st.top();
         st.pop();
     }

    reverse(res.begin(),res.end());
    return res;

    }
};
