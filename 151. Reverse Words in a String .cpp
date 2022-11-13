Output Status :

Runtime: 0 ms, faster than 100.00% of C++ online submissions for Reverse Words in a String.
Memory Usage: 7 MB, less than 91.09% of C++ online submissions for Reverse Words in a String.

// Approach 1 :: Using Stack :: Time : O(N) :: Aux_Space : O(N) 

class Solution {
public:
    string reverseWords(string s) {
        
        int n = s.length();
        
        stack<string> st;
        
        for(int i=0;i<n;i++){

            string str = "";
            if(s[i] == ' '){
                continue;
            }
            
            while(i<n && s[i] != ' '){
                str += s[i];
                i++;
            }
            st.push(str);
        }
        
        string res = "";
        
        while(!st.empty()){
            
            string var = st.top();
            st.pop();
            
            res += var;
            
            if(!st.empty()){
                res += " ";
                
            }
        }
        return res;
    }
};

// Approach 2 :: Inplace :: Time : O(N) :: Aux_Space : O(1)

class Solution {
public:
    string reverseWords(string s) {
        
          
        reverse(s.begin(),s.end());
        
        int i=0,l=0,r=0,n= s.length();
        
        while(i < n){
            
            while(i<n && s[i] != ' '){
                s[r++] = s[i++];
            }
            
            if(l<r){
                
                reverse(s.begin()+l,s.begin()+r);
                if(r == n){
                    break;
                }
                s[r++] = ' ';
                l = r;
            }
            i++;
        }
        
        if(r>0 && s[r-1] == ' '){
            r--;
        }
        s.resize(r);
        return s;
    }
};
