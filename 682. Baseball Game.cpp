Output Status: 

Runtime: 12 ms, faster than 8.80% of C++ online submissions for Baseball Game.
Memory Usage: 8.4 MB, less than 28.60% of C++ online submissions for Baseball Game.


class Solution {
public:
    int calPoints(vector<string>& ops) {
        
        int res = 0;
        int n = ops.size();
        stack<int> st;
        
        for(int i=0;i<n;i++){
            
            if(ops[i] == "C"){
                st.pop();
            }else if(ops[i] == "+"){
                int var1 = st.top();
                st.pop();
                int var2 = st.top();
                st.push(var1);
                st.push(var1 + var2);
            }else if(ops[i] == "D"){
                st.push(st.top()*2);
            }else{
                st.push(std::stoi(ops[i]));
            }
        }
        
        while(!st.empty()){
            res += st.top();
            st.pop();
        }
        return res;
    }
};
