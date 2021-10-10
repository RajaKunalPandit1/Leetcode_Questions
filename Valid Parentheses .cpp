Output Status:
Runtime: 0 ms, faster than 100.00% of C++ online submissions for Valid Parentheses.
Memory Usage: 6.4 MB, less than 50.48% of C++ online submissions for Valid Parentheses.

class Solution {
public:
    bool isValid(string s) {
        
        int n = s.size();
        stack<char> st;
        
        for(int i=0;i<n;i++){
            if(!st.empty() && st.top() == '(' && s[i] == ')'){
                st.pop();
            }else if(!st.empty() && st.top() == '[' && s[i] == ']'){
                st.pop();
            }else if(!st.empty() && st.top() == '{' && s[i] == '}'){
                st.pop();
            }else{
                st.push(s[i]);
            }
        }
        return st.empty();
        
    }
};
