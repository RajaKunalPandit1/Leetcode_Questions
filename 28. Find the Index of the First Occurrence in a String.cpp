Output Status : 

Runtime
4 ms
Beats
38.84%
Memory
6.3 MB
Beats
69.99%

class Solution {
public:
    int strStr(string haystack, string needle) {

        int n1 = haystack.size();
        int n2 = needle.size();

        if(needle[0] == '\0'){
            return 0;
        }

        for(int i=0;i<n1;i++){
            bool flag = true;
            for(int j=0;j<n2;j++){
                if(haystack[i+j] == 0){
                    return -1;
                }
                if(haystack[i+j] != needle[j]){
                    flag = false;
                    break;
                }
            }
            if(flag){
                return i;
            }
        }
    return -1;
    }
};

// Another Solution 

class Solution {
public:
    int strStr(string haystack, string needle) {
            return haystack.find(needle);
    }
};
