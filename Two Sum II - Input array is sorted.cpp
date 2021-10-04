Output Status:

Runtime: 9 ms, faster than 18.52% of C++ online submissions for Two Sum II - Input array is sorted.
Memory Usage: 9.4 MB, less than 93.79% of C++ online submissions for Two Sum II - Input array is sorted.

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        
        vector<int> res;
        
        int n = numbers.size();
        
        int low=0,high = n-1;
        
        while(low<high){
            if(numbers[low]+numbers[high] == target){
                res.push_back(low+1);
                res.push_back(high+1);
                break;
            }else if(numbers[low]+numbers[high]>target){
                high--;
            }else{
                low++;
            }
        }
        return res;
    }
};
