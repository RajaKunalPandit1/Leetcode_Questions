Output Status:

Submission Result: Accepted 

class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
     
        int n1 = nums1.size();
        int n2 = nums2.size();
        int n3 = nums3.size();
        
        unordered_map<int,int> m;
        set<int>s;
        
        vector<int> res;
        
        for(int i=0;i<n1;i++){
            m[nums1[i]]++;
        }
        
        for(int i=0;i<n2;i++){
            if(m.find(nums2[i]) != m.end()){
                s.insert(nums2[i]);
            }
        }
        
        for(int i=0;i<n2;i++){
            m[nums2[i]]++;
        }
        
        for(int i=0;i<n3;i++){
            if(m.find(nums3[i])!=m.end()){
                s.insert(nums3[i]);
            }
        }
        
       for(auto x:s){
           res.push_back(x);
       }
        
        return res;
    }
};
