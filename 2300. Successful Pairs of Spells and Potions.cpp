Output Status : 

Runtime
239 ms
Beats
80.13%
Memory
97.2 MB
Beats
73.7%

class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        
        int n1 = spells.size();
        int n2 = potions.size();

        vector<int> res(n1,0);

        sort(potions.begin(),potions.end());


        for(int i=0;i<n1;i++){

            int spell = spells[i];
            int left = 0;
            int right = n2-1;

            while(left <= right){

                int mid  = left + (right-left)/2;
                long long product = (long long)(spell) * (long long)(potions[mid]);

                if(product >= success){
                    right = mid-1;
                }else{
                    left = mid+1;
                }
            }
            res[i] = n2 -left;
        }
        return res;
    }
};

