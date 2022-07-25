Output Status : 

Runtime: 10 ms, faster than 73.39% of C++ online submissions for Find First and Last Position of Element in Sorted Array.
Memory Usage: 14.1 MB, less than 5.65% of C++ online submissions for Find First and Last Position of Element in Sorted Array.

// Naive Solution :: Time : O(N) :: Aux_Space : O(1)

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        
        vector<int> res;
        
        int n = nums.size();
        int idx = -1;
        
        for(int i=0;i<n;i++){
            if(nums[i] == target){
                idx = i;
                break;
            }
        }
        res.push_back(idx);
        idx = -1;
        
        for(int i=n-1;i>=0;i--){
            if(nums[i] == target){
                idx = i;
                break;
            }
        }
        res.push_back(idx);
        
        return res;
    }
};

// Efficient Solution :: Time : O(logN) :: Aux_Space : O(1)

class Solution {
public:
    
    // Function Will find the First Occurrence of the target
    
    int firstPos(vector<int> nums,int target){
        
        int n = nums.size();
        
        int low =0,high = n-1;
        
        while(low <= high){
            
            int mid = (low+high) >> 1;
            
            if(nums[mid] > target){
                high = mid-1;
            }else if(nums[mid] < target){
                low = mid+1;
            }else{
                
                if(mid == 0 || nums[mid] != nums[mid-1]){
                    return mid;
                }else{
                    high = mid-1;
                }
            }
        }
        return -1;
    }
    
    // Function Will find the last Occurrence of the target
    
    int lastPos(vector<int> nums,int target){
        
        int n = nums.size();
        
        int low =0,high = n-1;
        
        while(low <= high){
            
            int mid = (low+high) >> 1;
            
            if(nums[mid] > target){
                high = mid-1;
            }else if(nums[mid] < target){
                low = mid+1;
            }else{
                if(mid == n-1 || nums[mid] != nums[mid+1]){
                    return mid;
                }else{
                    low = mid+1;
                }
            }
        }
        return -1;
    }
    
    
    vector<int> searchRange(vector<int>& nums, int target) {
        
        int n = nums.size();
        
        if(n == 0){
            return {-1,-1};
        }
        
        int first = firstPos(nums,target);
        
        if(first == -1){ // If there is no First Occurence, then target doesn't exist
            return {-1,-1};
        }
            
        return {first,lastPos(nums,target)};
    }
};

// Another Solution :: 

vector<int> searchRange(int A[], int n, int target) {
    int i = 0, j = n - 1;
    vector<int> ret(2, -1);
    // Search for the left one
    while (i < j)
    {
        int mid = (i + j) /2;
        if (A[mid] < target) i = mid + 1;
        else j = mid;
    }
    if (A[i]!=target) return ret;
    else ret[0] = i;
    
    // Search for the right one
    j = n-1;  // We don't have to set i to 0 the second time.
    while (i < j)
    {
        int mid = (i + j) /2 + 1;	// Make mid biased to the right
        if (A[mid] > target) j = mid - 1;  
        else i = mid;				// So that this won't make the search range stuck.
    }
    ret[1] = j;
    return ret; 
}
