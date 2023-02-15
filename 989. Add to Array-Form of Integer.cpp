Output Status : 

Runtime
39 ms
Beats
31.70%
Memory
27.4 MB
Beats
66.17%

class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        int n = num.size()-1;
        int carry = 0;

        while(n>=0){

            int sum = num[n] + (k%10) + carry;
            k = k/10;

            num[n--] = sum%10;
            carry = sum/10;  
        }

        while(k > 0){

          int sum = (k%10) + carry;
          k = k/10;

          num.insert(num.begin(),sum%10);
          carry = sum/10;
        }
        if(carry > 0){
          num.insert(num.begin(),carry);
        }
      return num;
    }
};
