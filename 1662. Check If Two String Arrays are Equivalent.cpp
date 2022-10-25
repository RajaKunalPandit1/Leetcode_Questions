Output Status : 

Runtime: 11 ms, faster than 38.92% of C++ online submissions for Check If Two String Arrays are Equivalent.
Memory Usage: 11.6 MB, less than 56.29% of C++ online submissions for Check If Two String Arrays are Equivalent.

// Approach 1 : Time : O(N) + O(N) :: Aux_Space : O(n1 + n2)

class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        
        int n1 = word1.size();
        int n2 = word2.size();
        
        string s1 = "",s2 = "";
        
        for(int i=0;i<n1;i++){
            s1 += word1[i];
        }
        
        for(int i=0;i<n2;i++){
            s2 += word2[i];
        }
        return (s1 == s2);
    }
};

// Approach 2 : Time : O(N) :: Aux_Space : O(1)

class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        
        int i=0,j=0;
        int m=0,n=0;
        
        while(i < word1.size() && j < word2.size()){
            
            if(word1[i][m++] != word2[j][n++]){
                return false;
            }
            if(m >= word1[i].size()){
                i++;
                m=0;
            }
            if(n >= word2[j].size()){
                j++;
                n=0;
            }
        }
        return (i == word1.size() && j == word2.size());
    }
};
