Output Status:
Runtime: 32 ms, faster than 32.20% of C++ online submissions for Longest Substring Without Repeating Characters.
Memory Usage: 13.5 MB, less than 14.89% of C++ online submissions for Longest Substring Without Repeating Characters.


First approach is using sliding window with set approach it takes O(2n) time

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<char> st;
        int maxSize=0, i=0, j=0, n=s.size();
        while(j<n){
            if(st.count(s[j])==0){
                st.insert(s[j]);
                maxSize = max(maxSize, j-i+1);
                j++;
            }
            else{
                st.erase(s[i]);
                i++;
            }
        }
        return maxSize;
    }
};
This is second approach using sliding window but with hash map to save up on time by directly jumping with i index instead of dragging it throughout. It takes O(n) time.

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> mpp(256, -1);
        int maxSize=0, i=0, j=0, n=s.size();
        
        while(j<n){
            
            if(mpp[s[j]] != -1) i = max(mpp[s[j]]+1, i);
            
            mpp[s[j]] = j;
            
            maxSize = max(maxSize, j-i+1);
            
            j++;
           
        }
        return maxSize;
    }
};
