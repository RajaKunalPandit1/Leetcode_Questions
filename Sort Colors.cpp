class Solution {
public:
    void sortColors(vector<int>& nums) {
        
        int n= nums.size();
        int low=0,mid=0,high=n-1;
        
        while(mid<=high){
            
            if(nums[mid]==0){
                swap(nums[low],nums[mid]);
                mid++;
                low++;
            }else if(nums[mid]==1){
                mid++;
            }else{
                swap(nums[mid],nums[high]);
                high--;
            }
            
            
        }
        
        
        
    }
};

// Another Solution

class Solution {
public:
	void sortColors(vector<int>& nums) {
		int i = 0, countZero = 0, countOne = 0, countTwo = 0;
		for(int j = 0; j < nums.size(); j++){
			if(nums[j] == 0){
				countZero++;
			}
			else if(nums[j] == 1){
				countOne++;
			}
			else{
				countTwo++;
			}
		}
		while(countZero--){
			nums[i++] = 0;
		}
		while(countOne--){
			nums[i++] = 1;
		}
		while(countTwo--){
			nums[i++] = 2;
		}
	}
};
