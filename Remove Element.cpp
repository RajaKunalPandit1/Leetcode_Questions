class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        
        int n= nums.size();
        int low = 0;
        
            if(n==1 && nums[0]==val){
                return 0;
            }
            
            while(low<n){
                
                if(nums[low]==val){
                    nums[low] = nums[n-1];
                    n--;
                
                }else{
                    low++;
                }
                
            }
        return n;
        
        
    }
};

// Another Solution

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
            nums.erase(remove(nums.begin(), nums.end(), val), nums.end());
        return nums.size();
    }
};

// Another Solution

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int len = nums.size();
        int j = 0;
        for(int i = 0; i < len; i++){
            if(nums[i] != val){
               nums[j++] = nums[i];
            }
        }
        return j;
    }
};

// Another Solution

int removeElement(vector<int>& nums, int val) {
	int shift = 0;
	for (int i = 0; i < nums.size(); i++) {
		nums[i - shift] = nums[i];
		if (nums[i] == val)
			shift++;
	}
	return nums.size() - shift;
}
