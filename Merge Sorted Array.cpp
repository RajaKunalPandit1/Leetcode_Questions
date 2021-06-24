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

// Another Solution Using 3 Pointers

void merge(vector<int>& A, int m, vector<int>& B, int n) {
        int i=m-1, j=m+n-1, k=n-1;
        
        while(i >= 0 && k >= 0)
        {
            if(A[i] <= B[k])
                A[j--] = B[k--];
            else
                A[j--] = A[i--];
        }
        
        while(k >= 0)
            A[j--] = B[k--];
    }

// Another Solution Using Sorting

void merge(vector<int>& A, int m, vector<int>& B, int n) {
        for(int i=m,j=0; j<n; i++)
            A[i] = B[j++];
        
        sort(A.begin(),A.end());
 }

