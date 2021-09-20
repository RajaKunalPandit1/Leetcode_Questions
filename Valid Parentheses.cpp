Output Status:

Runtime: 0 ms, faster than 100.00% of C++ online submissions for Valid Parentheses.
Memory Usage: 6.2 MB, less than 79.80% of C++ online submissions for Valid Parentheses.
  
  
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

// Another Solution 


class Solution {
public:
    bool isValid(string s) {     //a string has been passed to our function for example-> [( )]
        stack<char> stack;     // we then declare a stack which would contain only char type
        for(auto i:s)     // for each char (element) i in string s we will check the following cases
        {
            if(i=='(' or i=='{' or i=='[') // here we check if the char is equal to any of the opening braces, we push it in the stack 
                stack.push(i);
            else {    //else obviously we know that the element is a closing bracket, so we check the next few cases, whether the stack is empty or if the top element of the stack doesn't match with the closing bracket. In such cases, we return zero
                if ( 
                    stack.empty() 
                    or (stack.top()=='(' && i != ')') 
                    or (stack.top()=='{' && i != '}')
                    or (stack.top()=='[' && i != ']') 
                )
                    return false;
                    
                    stack.pop();     // However if  the top element of the stack matches with the closing element then we pop it.
                }
                
        }
        return stack.empty();   // finally we use .empty() to check if the stack is empty or not; if empty it returns true and if not, it returns false.
    }
};
