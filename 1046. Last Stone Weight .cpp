Output Status : 

Runtime
0 ms
Beats
100%
Memory
7.6 MB
Beats
84.27%

class Solution {
public:
    int lastStoneWeight(vector<int>& s) {
        
        make_heap(s.begin(), s.end());
        
         while (s.size() > 1) {
            int x = s.front();
            pop_heap(s.begin(), s.end());
            s.pop_back();
            
            int y = s.front();
            pop_heap(s.begin(), s.end());
            s.pop_back();
            
            if (x == y) continue;
            
            s.push_back(abs(x - y));
            push_heap(s.begin(), s.end());
        }
        
        return s.size() ? s.front() : 0;
        
    }
};
