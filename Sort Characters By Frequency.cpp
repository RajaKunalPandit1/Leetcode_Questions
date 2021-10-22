Output Status:

Runtime: 18 ms, faster than 33.91% of C++ online submissions for Sort Characters By Frequency.
Memory Usage: 8.1 MB, less than 81.70% of C++ online submissions for Sort Characters By Frequency.


class Solution {
public:
    string frequencySort(string s) {
          unordered_map<char,int> freq;          
        priority_queue<pair<int,char>> maxheap;
        
        for(char c: s)
            freq[c]++;
        for(auto it: freq)
            maxheap.push({it.second,it.first}); 
        s="";   
        while(!maxheap.empty()){
            s+=string(maxheap.top().first,maxheap.top().second); 
            maxheap.pop();
        }
        return s;
    }
};
