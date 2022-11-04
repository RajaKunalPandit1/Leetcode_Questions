Output Status : 

Runtime: 22 ms, faster than 26.57% of C++ online submissions for Reverse Vowels of a String.
Memory Usage: 8.3 MB, less than 17.07% of C++ online submissions for Reverse Vowels of a String.

class Solution {
public:
    bool isVowel(char c){
        if(c == 'A' || c == 'a' || c == 'e' || c == 'E' || c == 'i' || c == 'I' || c == 'o' || c == 'O' || c == 'U' || c == 'u'){
            return true;
        }else{
            return false;
        }
    }
    
    string reverseVowels(string s) {
        
        int n = s.length();
        
        vector<int> v;
        
        for(int i=0;i<n;i++){
            if(isVowel(s[i])){
                v.push_back(i);
            }
        }
        
        int low = 0,high = v.size()-1;
        
        while(low <= high){
            swap(s[v[low++]],s[v[high--]]);
        }
        return s;
    }
};

// Another Solution :: 

class Solution {
public:
    bool isVowel(char c){
        if(c == 'A' || c == 'a' || c == 'e' || c == 'E' || c == 'i' || c == 'I' || c == 'o' || c == 'O' || c == 'U' || c == 'u'){
            return true;
        }else{
            return false;
        }
    }
    
    string reverseVowels(string s) {
        
        int n = s.length();
        
        int i=0,j=n-1;
        
        while(i<j){
            while(i<j && !isVowel(s[i]))i++;
            while(i<j && !isVowel(s[j]))j--;
            if(i<j){
                swap(s[i++],s[j--]);
            }
        }
        return s;
    }
};
