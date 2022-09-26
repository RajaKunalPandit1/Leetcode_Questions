Output Status : 

Runtime: 0 ms, faster than 100.00% of C++ online submissions for Satisfiability of Equality Equations.
Memory Usage: 11.4 MB, less than 44.49% of C++ online submissions for Satisfiability of Equality Equations.


class Solution {
public:
    int uf[26];
    int find(int x){
        
        if(x!= uf[x]){
            uf[x] = find(uf[x]);
        }
        return uf[x];
    }
    
    bool equationsPossible(vector<string>& equations) {
        
        for(int i=0;i<26;i++){
            uf[i] = i;
        }
        
        for(string e: equations){
            if(e[1] == '='){
                uf[find(e[0]-'a')] = find(e[3]-'a');
            }
        }
        
        for(string e: equations){
            if(e[1] == '!'  && find(e[0]-'a') == find(e[3]-'a')){return false;} 
        }
        return true;
    }
};
