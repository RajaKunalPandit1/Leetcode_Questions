class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        int n = nums.size();
        
        sort(nums.begin(),nums.end());
        
        for(int i=1;i<n;i++){
            if(nums[i]== nums[i-1]){
                return true;
            }
        }
        return false;
        
    }
};

// Another Solution Using Sets

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n = nums.size();
        set<int>s;
        for(int i = 0; i < n; i++)
            s.insert(nums[i]);
        if(n != s.size())
            return true;
        return false;   
    }
};

// Another Solution Using Map

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int>m;
        for(int i = 0; i < n; i++)
            m[nums[i]]++;
        for(auto i : m)
            if(i.second >= 2)
                return true;
        return false;
    }
};

// Another Solution Using Unordered_Map

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int>m;
        for(int i = 0; i < n; i++)
        {
            if(m.find(nums[i]) == m.end())
                m[nums[i]]++;
            else 
                return true;
        }
        return false;
  }
};
