Output Status:

Runtime: 12 ms, faster than 15.48% of C++ online submissions for Intersection of Two Arrays II.
Memory Usage: 10.1 MB, less than 72.71% of C++ online submissions for Intersection of Two Arrays II.
  
  
  class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        
        int n = nums1.size();
        int m = nums2.size();
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        vector<int> res;
        int i=0,j=0;
        while(i<n && j<m){
            if(nums1[i] == nums2[j]){
                res.push_back(nums1[i]);
                i++;
                j++;
            }else if(nums1[i]<= nums2[j]){
                i++;
            }else{
                j++;
            }
        }
        return res;
        
    }
};

// Another Solution 


class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        
        int n = nums1.size();
        int n2 = nums2.size();
        vector<int> res;
        
        
        unordered_map<int,int> m;
        
        for(auto &x:nums1){
            m[x]++;
        }
        
        for(int i=0;i<n2;i++){
            if(m[nums2[i]]){
                res.push_back(nums2[i]);
                m[nums2[i]]--;
            }
            
        }
        return res;
        
    }
};
