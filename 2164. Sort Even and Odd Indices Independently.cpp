Output Status:

Runtime: 12 ms, faster than 38.56% of C++ online submissions for Sort Even and Odd Indices Independently.
Memory Usage: 12.4 MB, less than 11.66% of C++ online submissions for Sort Even and Odd Indices Independently.
  
  
  class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        
        int n = nums.size();
        
        vector<int> odd;
        vector<int> even;
        
        for(int i=0;i<n;i++){
            if(i%2 == 0){
                even.push_back(nums[i]);
            }else{
                odd.push_back(nums[i]);
            }
        }
        sort(odd.begin(),odd.end(),greater<int>());
        sort(even.begin(),even.end());
        
        vector<int> num;
        
        int o = 0,e=0;
        
        for(int i=0;i<n;i++){
            if(i%2 == 0){
                num.push_back(even[e]);
                e++;
            }else{
                num.push_back(odd[o]);
                o++;
            }
        }
        return num;
        
    }
};
