Output Status: 

Runtime: 276 ms, faster than 5.03% of C++ online submissions for Minimum Remove to Make Valid Parentheses.
Memory Usage: 12 MB, less than 29.63% of C++ online submissions for Minimum Remove to Make Valid Parentheses.

class Solution {
public:
    string minRemoveToMakeValid(string s) {
        string res = "";
        
        stack<int> st;
        
        for(int i=0;i<s.length();i++){
            if(s[i] == '('){
                st.push(i);
            }else if(s[i] == ')'){
                if(st.empty()){
                    st.push(i);    
                }else{
                    if(s[st.top()] == '('){
                        st.pop();
                    }else{
                        st.push(i);
                    }
                }
            }
        }
        
        vector<int> v;
        
        while(!st.empty()){
            v.push_back(st.top());
            st.pop();
        }
        
        for(int i=0;i<s.length();i++){
            if(find(v.begin(),v.end(),i) ==v.end()){
                res += s[i];
            }
        }
        
        return res;
    }
};


// Another Solution

class Solution {
public:
    string minRemoveToMakeValid(string s) {
        int n=s.length();
        // Step 1 : Iterate from start
        int count=0; 
        for(int i=0;i<n;++i){
            if(s[i]=='('){ // for open bracket
                ++count;
            }
            else if(s[i]==')'){ // for close bracket
                if(count==0){  // if no. of close brackets > no. of open brackets
                    s[i]='#';
                }
                else{
                    // if matching parentheses found decrease count
                    --count;
                }
            }
        }
        
        // Step 2 : Iterate from end
        count=0;
        for(int i=n-1;i>=0;--i){
            if(s[i]==')'){ // for close bracket
                ++count;
            }
            else if(s[i]=='('){ // for open bracket
                if(count==0){ // if no. of open brackets > no. of close brackets
                    s[i]='#';
                }
                else{
                    // if matching parentheses found decrease count
                    --count;
                }
            }
        }
        
        // Step 3 : Create "ans" by ignoring the special characters '#'
        string ans="";
        for(int i=0;i<n;++i){
            if(s[i]!='#'){ 
                ans.push_back(s[i]);
            }
        }
        return ans;
    }
};
