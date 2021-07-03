class Solution {
public:
    void reverseString(vector<char>& s) {
        
        int n = s.size();
        
        int l=0,h=n-1;
        
        while(l<h){
            swap(s[l],s[h]);
            l++;
            h--;
        }
        
        
    }
};

// Another Solution

class Solution {
public:
    void reverseString(vector<char>& s) {
        for(int i=0, j=s.size()-1; i<j ; i++, j--){
            swap(s[i],s[j]);
        }
    }
};

// Another Solution

class Solution {
public:
    void reverseString(vector<char>& s) {
        
        reverse(s.begin(),s.end());  
    }
};

// Another Solution

class Solution {
public:
    string reverseString(string s) {
        int n = s.size();
        for(int i = 0; i < n/2; i++) {
            swap(s[i], s[n - 1 - i]);
        }
        return s;
    }
};
