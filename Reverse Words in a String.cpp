Output Status:

Runtime: 4 ms, faster than 84.03% of C++ online submissions for Reverse Words in a String.
Memory Usage: 7.5 MB, less than 60.75% of C++ online submissions for Reverse Words in a String


class Solution {
public:
    string reverseWords(string s) {
        
        stack<string>st;
        for(int i =0;i<s.length();i++){
            string word=""; 
            if(s[i]==' ')continue;
            while(s[i]!=' ' and i<s.length()){
                word+=s[i];
                i++;
            }
            st.push(word);
           
        }
        string ans="";
        while(!st.empty()){
            ans+=st.top();
            st.pop();
            if(!st.empty())ans+=" ";
        }
        
        return ans;
        
    }
};
