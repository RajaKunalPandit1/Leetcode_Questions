Output Status:

Runtime: 0 ms, faster than 100.00% of C++ online submissions for Reverse Only Letters.
Memory Usage: 6 MB, less than 88.62% of C++ online submissions for Reverse Only Letters.

  
  class Solution {
public:
    string reverseOnlyLetters(string s) {
        int st=0,end=s.length()-1;
        
        while(st<end)
        {
            while(st<end && !(s[st]>='a' && s[st]<='z') && !(s[st]>='A' && s[st]<='Z'))
            {
                st++;
                if(st==end)
                    return s;
            }   
            while(st<end && !(s[end]>='a' && s[end]<='z') && !(s[end]>='A' && s[end]<='Z'))
            {
                end--;
                if(st==end)
                    return s;
            }    
            char temp;
            temp = s[st];
            s[st]=s[end];
            s[end]=temp;
            st++;
            end--;
        }
        return s;
    }
};
