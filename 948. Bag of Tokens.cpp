Output Status : 

Runtime: 19 ms, faster than 12.07% of C++ online submissions for Bag of Tokens.
Memory Usage: 10.6 MB, less than 27.39% of C++ online submissions for Bag of Tokens.


class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
     
        sort(tokens.begin(),tokens.end());
        
        int res = 0,points =0,i=0,j=tokens.size()-1;
        
        while(i<=j){
            
            if(power >= tokens[i]){
                power -= tokens[i++];
                res = max(res,++points);
            }else if(points > 0){
                points--;
                power += tokens[j--];
            }else{
                break;
            }
        }
        return res;
    }
};
