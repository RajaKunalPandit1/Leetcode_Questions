Output Status : 

Runtime
28 ms
Beats
73.92%
Memory
11.1 MB
Beats
52.66%


class Solution {
public:
    int minFlipsMonoIncr(string s) {
        
        int flip = 0,cnt = 0;

        for(auto c : s){
          if(c == '1'){
            flip++;
          }else{
            cnt++;
          }
          cnt = min(flip,cnt);
        }
      return cnt;
    }
};
