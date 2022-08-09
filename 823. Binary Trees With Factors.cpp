Output Status : 

Runtime: 90 ms, faster than 71.08% of C++ online submissions for Binary Trees With Factors.
Memory Usage: 9.2 MB, less than 67.38% of C++ online submissions for Binary Trees With Factors.

class Solution {
public:
    int numFactoredBinaryTrees(vector<int>& arr) {
        
        int n = arr.size();
        map<int,long long int> mp;
        
        sort(arr.begin(),arr.end());
        
        for(int i=0;i<n;i++){
            mp.insert({arr[i],1});
        }
        
        for(int i=1;i<n;i++){
            
           long long int count = 0;
            auto it3 = mp.find(arr[i]);
            
            for(int j=0;j<i;j++){
                
                if(arr[i]%arr[j] == 0){
                    
                    auto it = mp.find(arr[i]/arr[j]);
                    auto it2 = mp.find(arr[j]);
                    
                    if(it != mp.end()){
                        
                       count += (it->second)*(it2->second);
                        
                    }
                }
            }
            it3->second += count;
        }
        
        long long int sum = 0;
        for(auto x: mp){
            sum += x.second;
        }
        return sum%(1000000007);
    }
};
