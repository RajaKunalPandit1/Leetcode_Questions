Output Status : 

Runtime
4 ms
Beats
78.99%
Memory
10.7 MB
Beats
31.86%


class Solution {
public:
    string simplifyPath(string path) {
        
        int n = path.size();
        string res = "";
        stack<string> st;

        for(int i=0;i<path.size();i++){

            if(path[i] == '/'){
                continue;
            }
            string temp;

            while(i < n && path[i] != '/'){
                temp += path[i];
                i++;
            }

            if(temp == "."){
                continue;
            }else if(temp == ".."){
                if(!st.empty()){
                    st.pop();
                }
            }else{
                st.push(temp);
            }
        }

        while(!st.empty()){
            res = "/" + st.top() + res;
            st.pop();
        }
        if(res.size() == 0){
            return "/";
        }
        return res;
    }
};
