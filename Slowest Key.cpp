Output Status:

Runtime: 13 ms, faster than 14.41% of C++ online submissions for Slowest Key.
Memory Usage: 10.5 MB, less than 98.88% of C++ online submissions for Slowest Key.
  
  
  class Solution {
public:
    char slowestKey(vector<int>& releaseTimes, string keysPressed) {
        int time = releaseTimes[0], new_time = 0;
        char key = keysPressed[0];
        
        for (int i = 1; i < releaseTimes.size(); i++) {
            new_time = releaseTimes[i] - releaseTimes[i-1];
            
            if (new_time == time) 
                key = keysPressed[i] > key ? keysPressed[i] : key;
            
            else if (new_time > time) {
                time = new_time;
                key = keysPressed[i];
            }
        }
        return key;
    }
};

