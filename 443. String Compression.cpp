Output Status : 

Runtime
5 ms
Beats
68.76%
Memory
9 MB
Beats
83.2%
  

class Solution {
public:
    int compress(vector<char>& chars) {
        
        int n = chars.size();
        if(n == 1){
            return 1;
        }

        int i = 0,j=0;

        while(i<n){
            int count = 1;
            while(i < n-1 && chars[i] == chars[i+1]){
                count++;
                i++;
            }
            chars[j++] = chars[i++];
            if(count > 1){
                string countStr = to_string(count);
                for(char c : countStr){
                    chars[j++] = c;
                }
            }
        }
        return j;
    }
};
