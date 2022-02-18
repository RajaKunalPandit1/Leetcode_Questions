Output Status: 

Runtime: 8 ms, faster than 46.64% of C++ online submissions for Remove K Digits.
Memory Usage: 7 MB, less than 52.75% of C++ online submissions for Remove K Digits.


class Solution {
public:
    string removeKdigits(string num, int k) {
        
         string ans="";
        for(char &c:num)
        {
            while(ans.size() && ans.back()>c &&k)
            {
                ans.pop_back();
                k--;
            }
            if(ans.size()||c!='0')ans.push_back(c);
        }
        while(ans.size()&&k--)
        {
            ans.pop_back();
        }
        return (ans=="")?"0":ans;
        
    }
};
