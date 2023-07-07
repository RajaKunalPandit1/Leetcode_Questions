Output Status : 

Runtime
27 ms
Beats
69.5%
Memory
11.8 MB
Beats
20.67%

class Solution {
public:
    
    int count(string s, int k, char ch){
        int n=s.length();
        
        int maxlen=0, bad=0; // count of opposite parity character
        
        int i=0, j=0;
        while(j<n){
            if(s[j]!=ch) bad++; // check if we are acquiring a bad character at rear end
            
            while(i<=j && bad>k){
                char cur=s[i];
                if(cur!=ch) bad--; // releasing bad characters acquired from front end
                i++;
            }
            
            maxlen=max(maxlen,j-i+1);
            j++;
        }
        return maxlen;
    }
    
    int maxConsecutiveAnswers(string s, int k) {
        return max(count(s,k,'T'),count(s,k,'F')); // max number of consecutive 'T's or 'F's
    }
};
