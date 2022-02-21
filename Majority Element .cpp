Output Status: 

Runtime: 15 ms, faster than 92.23% of C++ online submissions for Majority Element.
Memory Usage: 19.7 MB, less than 9.42% of C++ online submissions for Majority Element.


  // Using Moore's Voting Algo
  
int majorityElement(vector<int>& nums) {      // Time: O(N) :::: Aux_Space : O(1)
        
        int n= nums.size();
        
        int fres = floor(n/2);
        
        int ele =0,count=0,res=-1;;
        
        for(int i=0;i<n;i++){
            
            if(count == 0){
                ele = nums[i];
            }
            
            if(nums[i] == ele){
                count++;
            }else{
                count--;
            }
    
        }
        
        count = 0;
        for(int i=0;i<n;i++){
            if(nums[i] == ele){
                count++;
            }
        }
        
        if(count> fres){
            res = ele;
        }
        
        return res;
    }


// Using HashMap


int majorityElement(vector<int>& nums) {   // Time: O(N) :::: Aux_Space: O(N)
    
    map<int,int> mp;
    
    for(int i=0;i<nums.size();i++){
        mp[nums[i]]++;
    }
    
    int res = 0;
    
    for(auto x: mp){
        
        if(x.second > (nums.size()/2)){
            res = x.first;
        }
        
    }
    return res;
    
}


// Using Sorting 

 int majorityElement(vector<int>& nums) {  // Time: O(NlogN) ::: Aux_Space: O(1)
        
        sort(nums.begin(),nums.end());
        
        return (nums[nums.size()/2]);
        
    }
