Output Status: 

Runtime: 59 ms, faster than 53.17% of C++ online submissions for Smallest String With A Given Numeric Value.
Memory Usage: 27 MB, less than 59.30% of C++ online submissions for Smallest String With A Given Numeric Value.


class Solution {
public:
    string getSmallestString(int n, int k) {
        
        string res = "";
        
        for(int i=0;i<n;i++){
            res += 'a';
        }
        
        int j=n-1;
        k = k-n;
        
        while(k>0){
            if(k<25){
                res[j] = char ('a' + k);
                k = 0;
            }else{
                res[j] = 'z';
                k -= 25;
            }
            j--;
        }
        return res;
        
    }
};


// Another Solution 

string getSmallestString(int n, int k) {
        
        string res(n, ' ');
        
        for(int i=n; i>0; i--)
        {
            int charIdx = min(26, (k-i+1));
            res[i-1] = 'a' + (charIdx - 1);
            k -= charIdx;
        }
        
        return res;
    }
