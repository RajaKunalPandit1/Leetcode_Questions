Output Status : 

Runtime
19 ms
Beats
38.66%
Memory
17.7 MB
Beats
76.60%

    vector<int> asteroidCollision(vector<int>& arr) {
        
        vector<int> res;
        stack<int> st;

        int n = arr.size();

        for(int i=0;i<n;i++){

            if(st.empty() || arr[i] > 0){

                st.push(arr[i]);
            }else{

                while(!st.empty() && st.top() > 0 && st.top() < abs(arr[i])){
                    st.pop();
                }

                if(!st.empty() && st.top() == abs(arr[i])){
                    st.pop();
                }else{

                    if(st.empty() || st.top() < 0){
                        st.push(arr[i]);
                    }
                }
            }
        }

        while(!st.empty()){
            res.push_back(st.top());
            st.pop();
        }
        reverse(res.begin(),res.end());
        return res;
    }

