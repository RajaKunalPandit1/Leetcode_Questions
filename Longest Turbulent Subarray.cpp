Output Status:

Runtime: 68 ms, faster than 85.11% of C++ online submissions for Longest Turbulent Subarray.
Memory Usage: 40.3 MB, less than 82.01% of C++ online submissions for Longest Turbulent Subarray

class Solution {
public:
    int maxTurbulenceSize(vector<int>& arr) {
        
        int answer = 1, n = arr.size(), j = 0, i = 1;
    
    while(i != n){
      while(i != n && arr[j] == arr[i]) j++, i++;
      if(i == n) break;
      
      int sign, idx = j;
      arr[i] - arr[j] > 0 ? sign = -1 : sign = +1;
      
      for(;++i != n && arr[++j] != arr[i] && (arr[i] - arr[j] > 0 ? 1 : -1) == sign; sign = -sign);
      
      answer = max(answer, i - idx);
    }
    
    return answer;
        
    }
};
