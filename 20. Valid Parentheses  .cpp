Output Status : 

Runtime
0 ms
Beats
100%
Memory
6.4 MB
Beats
56.25%

class Solution {
public:

    bool isSame(char a, char b){

        if((a == '(' && b == ')') || (a == '[' && b == ']') || (a == '{' && b == '}')){
            return true;
        }
        return false;
    }

    bool isValid(string s) {
        
        int n = s.length();

        stack<char> st;

        for(int i=0;i<n;i++){

            if(s[i] == '(' || s[i] == '[' || s[i] == '{'){
                st.push(s[i]);
            }else{

                if(!st.empty() && isSame(st.top(),s[i])){
                    st.pop();
                }else{
                    return false;
                }
            }
        }
        return (st.empty());    
    }
};
