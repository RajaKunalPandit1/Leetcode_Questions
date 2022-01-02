Output Status: 

Runtime: 34 ms, faster than 39.68% of C++ online submissions for Pairs of Songs With Total Durations Divisible by 60.
Memory Usage: 23.1 MB, less than 60.38% of C++ online submissions for Pairs of Songs With Total Durations Divisible by 60.


class Solution {
public:
     int numPairsDivisibleBy60(vector<int>& time)
    {
        int count=0;
        vector<int>v(60,0);
        for(int i=0;i<time.size();i++)
        {
            int a=time[i]%60;
            if(a==0)
                count+=v[0];
            else
                count+=v[60-a];
            v[a]++;
        }
        return count;
    }
};

