Output Status:

Runtime: 44 ms, faster than 5.24% of C++ online submissions for Maximize Distance to Closest Person.
Memory Usage: 17.1 MB, less than 63.67% of C++ online submissions for Maximize Distance to Closest Person.


class Solution {
public:
   int maxDistToClosest(vector<int>& seats) {
        int longest = 0, beginning = 0, i = 0;
        // count zeros in beginning
        while (seats[i]==0)
        {
            beginning++;
            i++;
        }
        // find longest sequence of zeros in middle
        int count = beginning;
        for (; i<seats.size(); i++)
        {
            if (seats[i] == 0)
                count++;
            else
            {
                longest = std::max({count, longest});
                count = 0;
            }
        }
        // at the end, count = length of zeros in the end
        // in the middle we have to divide the length in two to find maximum distance
        longest = longest%2==0?longest/2:longest/2+1;
        // return the largest distance
        return std::max({longest, count, beginning});
    }
};
