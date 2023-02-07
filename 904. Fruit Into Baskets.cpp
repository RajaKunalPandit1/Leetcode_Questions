Output Status : 

Runtime
183 ms
Beats
71.14%
Memory
71.2 MB
Beats
73.34%
  
  
class Solution {
public:

    int totalFruit(vector<int>& fruits) {

        unordered_map<int, int> mpp;

        int i = 0, j = 0, res = 0;
        
        while(j < fruits.size())
        {

            mpp[fruits[j]]++;
            
            if(mpp.size() <= 2) res = max(res, j-i+1);
            
            else
            {
                mpp[fruits[i]]--;

                if(mpp[fruits[i]] == 0) mpp.erase(fruits[i]);

                i++;
            }

            j++;
        }

        return res; 
    }
};
