Output Status : 

Runtime: 4 ms, faster than 65.37% of C++ online submissions for Check if the Sentence Is Pangram.
Memory Usage: 6.5 MB, less than 55.40% of C++ online submissions for Check if the Sentence Is Pangram.

class Solution {
public:
    bool checkIfPangram(string sentence) {
        
        set<char> st;
        int n = sentence.size();
        
        for(int i=0;i<n;i++){
            st.insert(sentence[i]);
        }
        return (st.size() == 26);
    }
};

