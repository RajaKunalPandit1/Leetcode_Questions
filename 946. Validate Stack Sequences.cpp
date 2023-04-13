Output Status : 

Runtime
15 ms
Beats
18.21%
Memory
15.4 MB
Beats
68.46%


class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        
        int n = pushed.size(), m = popped.size();
        stack<int> st;

        int j=0;

        for(auto x : pushed){
            st.push(x);

            while(!st.empty() && st.top() == popped[j]){

                st.pop();
                j++;
            }
        }
        return (st.empty());
    }
};

// Efficient Solution 

class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        
        int i=0,j=0;

        for(auto x : pushed){
            pushed[i++] = x;
            while(i >0 && pushed[i-1] == popped[j]){
                --i;
                ++j;
            }
        }
        return (i == 0);
    }
};
