Output Status : 

Runtime
11 ms
Beats
35.73%
Memory
8.9 MB
Beats
55.62%

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {

        unordered_map<int,int> mp;

        vector<int> res(nums1.size(),-1);

        stack<int> st;

        for(int i=0;i<nums2.size();i++){

            int ele  = nums2[i];

            while(!st.empty() && ele > st.top()){
                mp[st.top()] = ele;
                st.pop();
            }
            st.push(ele);
        }

        for(int i=0;i<nums1.size();i++){

            int ele = nums1[i];

            if(mp.find(ele) != mp.end()){
                res[i] = mp[ele];
            }
        }
        return res;
    }
};
