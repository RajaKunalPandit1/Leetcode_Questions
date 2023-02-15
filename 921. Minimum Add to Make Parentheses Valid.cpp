Output Status : 

Runtime
4 ms
Beats
39.88%
Memory
6.4 MB
Beats
29.66%

class Solution {
public:
    bool isSame(char a,char b){
      return ((a == '(' && b == ')') || (a == '[' && b == ']') || (a == '{' && b == '}'));
    }
    int minAddToMakeValid(string s) {
        int n = s.length();
        int res = 0;
        stack<char> st;

        for(int i=0;i<n;i++){
            if(s[i] == '(' || s[i] == '[' || s[i] == '{'){
              st.push(s[i]);
            }else{
              if(!st.empty() && isSame(st.top(),s[i])){
                st.pop();
              }else{
                res++;
              }
            }
        }
        res += st.size();
      return res;
    }
};
