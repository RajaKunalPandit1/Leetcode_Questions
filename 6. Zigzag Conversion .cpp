Output Status : 

Runtime
40 ms
Beats
29.12%
Memory
14.6 MB
Beats
23.50%

class Solution {
public:
    string convert(string s, int numRows) {
        int n = s.length();
        
        if(numRows == 1){
            return s;
        }
        
        if(numRows >= n){
            return s;
        }
        
        
        int direction  = -1;
        int row = 0;
        
        vector<char> res[numRows];
        
        for(auto c: s){
            
            res[row].push_back(c);
            
            if(row == 0 || row == numRows-1){
                direction *= -1;
            }
            row += direction;
        }
        
        string result = "";
        
        for(auto x: res){
            for(auto y: x){
                result += y;
            }
        }
        
        return result;
    }
};

