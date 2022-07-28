Output Status : 

Runtime: 20 ms, faster than 32.51% of C++ online submissions for Valid Anagram.
Memory Usage: 7.2 MB, less than 77.97% of C++ online submissions for Valid Anagram.


// Naive Solution :: Time : O(NlogN) :: Aux_Space : O(1)

class Solution {
public:
    bool isAnagram(string s, string t) {
        
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        
        return (s==t);
        
    }
};

// Efficient Solution :: Time : O(N) :: Aux_Space : (1)

class Solution {
public:
    bool isAnagram(string s, string t) {
        
        int n = s.length(),m = t.length();
        
        if(n!=m) return false;
        
        unordered_map<char,int> mp(26);
        
        for(auto x: s) mp[x]++;
        
        
        for(auto x: t) mp[x]--;
        
        
        for(auto x: mp){
            if(x.second > 0) return false;
        }
        
        return true;
    }
};

// Another Efficient Solution :: Time : O(N) :: Aux_Space : O(1)

class Solution {
public:
    bool isAnagram(string s, string t) {
        
        int n = s.length(), m = t.length();
        
        if(n != m) return false;
        
        int isVisited[26] = {0};
        
        for(int i=0;i<n;i++){
            
            isVisited[s[i] - 'a']++;
            isVisited[t[i] - 'a']--;
        }
        
        for(int i=0;i<26;i++) if(isVisited[i]) return false;
        
        return true;
    }
};
