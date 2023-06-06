Output Status : 

Runtime
9 ms
Beats
22.98%
Memory
9.2 MB
Beats
28.46%

class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        
        int n = arr.size();

        sort(arr.begin(),arr.end());
        int var = arr[1] - arr[0];

        for(int i=2;i<n;i++){
            if(arr[i] - arr[i-1] != var){
                return false;
            }
        }
        return true;
    }
};

// Another Solution 

class Solution {
public:
    bool canMakeArithmeticProgression(std::vector<int>& arr) {
        int length = arr.size();
        int min_val = INT_MAX;
        int max_val = INT_MIN;

        for (int num : arr) {
            min_val = std::min(min_val, num);
            max_val = std::max(max_val, num);
        }

        double diff = static_cast<double>(max_val - min_val) / (length - 1);

        for (int i = 0; i < length; i++) {
            double expected = min_val + i * diff;
            bool found = false;
            for (int num : arr) {
                if (std::abs(num - expected) < 1e-9) {
                    found = true;
                    break;
                }
            }
            if (!found) {
                return false;
            }
        }

        return true;
    }
};
