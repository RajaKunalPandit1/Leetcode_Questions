Output Status :

Runtime: 3 ms, faster than 72.68% of C++ online submissions for Merge Sorted Array.
Memory Usage: 9 MB, less than 72.57% of C++ online submissions for Merge Sorted Array.


// Naive Solution : Time : O(NlogN) + O(N) + O(N) = O(NlogN) :: Aux_Space : O(M+N)

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        vector<int> res;
        
        for(int i=0;i<n;i++){
            res.push_back(nums2[i]);
        }
        
        for(int j=0;j<m;j++){
            res.push_back(nums1[j]);
        }
        
        sort(res.begin(),res.end());
        
        int k = 0;
        
        for(int i=0;i<m+n;i++){
            nums1[i] = res[k];
            k++;
        }
    }
};



// Efficient Solution : Time : O(M+N) :: Aux_Space : O(M+N)

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
       
        vector<int> res;
        
        int i=0,j=0;
        while(i<m && j<n){
            
            if(nums1[i]>nums2[j]){
                res.push_back(nums2[j]);
                j++;
            }else if(nums1[i]==nums2[j]){
                res.push_back(nums1[i]);
                res.push_back(nums2[j]);
                i++;j++;
            }else{
                res.push_back(nums1[i]);
                i++;
            }
        }
        while(i<m){
            res.push_back(nums1[i]);
            i++;
        }
        while(j<n){
            res.push_back(nums2[j]);
            j++;
        }
        for(int k=0;k<res.size();k++){
            nums1[k] = res[k];
        }
    }
};
