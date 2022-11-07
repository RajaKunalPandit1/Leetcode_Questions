Output Status : 

Runtime: 0 ms, faster than 100.00% of C++ online submissions for Maximum 69 Number.
Memory Usage: 5.9 MB, less than 82.75% of C++ online submissions for Maximum 69 Number.

class Solution {
public:
    int maximum69Number (int num) {
        
        string res = to_string(num);
        
        for(auto &c : res){
            if(c == '6'){
                c = '9';
                break;
            }
        }
        return stoi(res);
    }
};
