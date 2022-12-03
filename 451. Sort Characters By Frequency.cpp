Output Status : 

Runtime: 16 ms, faster than 79.35% of C++ online submissions for Sort Characters By Frequency.
Memory Usage: 8.2 MB, less than 85.65% of C++ online submissions for Sort Characters By Frequency.


class Solution {
public:
    string frequencySort(string s) {
         unordered_map<char,int> freq;           //for frequency of characters
        priority_queue<pair<int,char>> maxheap; //maxheap according to frequency of characters
        for(char c: s)
            freq[c]++;
        for(auto it: freq)
            maxheap.push({it.second,it.first}); //heap will be constructed on the basis of frequency
        s="";   
        while(!maxheap.empty()){
            s+=string(maxheap.top().first,maxheap.top().second); //frequency times the character
            maxheap.pop();
        }
        return s;
    }
};
