Output Status : 

Runtime: 272 ms, faster than 99.15% of C++ online submissions for Longest Palindrome by Concatenating Two Letter Words.
Memory Usage: 168.4 MB, less than 16.83% of C++ online submissions for Longest Palindrome by Concatenating Two Letter Words.

class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        
        vector<vector<int>> counter(26,vector<int>(26,0));
        int ans = 0;
        
        for(string w: words){
            int a = w[0]-'a',b=w[1]-'a';
            if(counter[b][a]){
                ans += 4;
                counter[b][a]--;
            }else{
                counter[a][b]++;
            }
        }
        
        for(int i=0;i<26;i++){
            if(counter[i][i]){
                ans += 2;
                break;
            }
        }
        return ans;
    }
};
