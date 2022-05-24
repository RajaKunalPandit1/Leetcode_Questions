Output Status: 

Runtime: 2 ms, faster than 53.90% of C++ online submissions for Smallest Value of the Rearranged Number.
Memory Usage: 6.3 MB, less than 12.50% of C++ online submissions for Smallest Value of the Rearranged Number.

class Solution {
public:
    long long smallestNumber(long long num) {
        
        vector<long long> vec;
        
        long long var = abs(num);
        while(var>0){
            long long temp = var%10;
            vec.push_back(temp);
            var = var/10;
        }
        long long res = 0;
        
        if(num<0){
            sort(vec.begin(),vec.end(),greater<int>());
            for(int i=0;i<vec.size();i++){
                res = (res*10) + vec[i];
            }
            res *= (-1);
            
        }else{
            sort(vec.begin(),vec.end());
            for(int i=0;i<vec.size();i++){
                if(vec[i]!=0){
                    swap(vec[0],vec[i]);
                    break;
                }
            }
            for(int i=0;i<vec.size();i++){
                res = (res*10) + vec[i];
            }
        }
        
        return res;
    }
};
