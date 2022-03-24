Output Status: 

Runtime: 110 ms, faster than 49.46% of C++ online submissions for Boats to Save People.
Memory Usage: 42 MB, less than 57.42% of C++ online submissions for Boats to Save People.


class Solution {  // Time: O(NlogN) :: Aux_Space: O(1)
public:
    int numRescueBoats(vector<int>& people, int limit) {
        
        int n = people.size();
        
        int low= 0,high = n-1;
        
        int res = 0;
        sort(people.begin(),people.end());
        
        while(low<=high){
            
            if(people[low] + people[high] <= limit){
                res++;
                low++;
                high--;
            }else{
                res++;
                high--;
            }
        }
        
        return res;
        
    }
};
