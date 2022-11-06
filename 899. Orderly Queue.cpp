Output Status  :

Runtime: 7 ms, faster than 63.22% of C++ online submissions for Orderly Queue.
Memory Usage: 10.8 MB, less than 52.30% of C++ online submissions for Orderly Queue.

class Solution {
public:
    string orderlyQueue(string s, int k) {
        
        string res = s;
        if(k == 1){
            for(int i=1;i<s.size();i++){
                res = min(res,s.substr(i)+s.substr(0,i));
            }
        }else{
            sort(res.begin(),res.end());
        }
        return res;
    }
};
