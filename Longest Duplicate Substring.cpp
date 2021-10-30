Output Status:

Runtime: 1220 ms, faster than 63.76% of C++ online submissions for Longest Duplicate Substring.
Memory Usage: 168.3 MB, less than 73.83% of C++ online submissions for Longest Duplicate Substring.

class Solution {
public:
    string longestDupSubstring(string S) {
         std::string_view longest;
        std::unordered_set<std::string_view> set;
        size_t beg = 1;
        size_t end = S.size() - 1;
        while (beg <= end)
        {
            auto len = beg + (end - beg) / 2;
            bool found = false;
            for (size_t i = 0; i != S.size() - len + 1; ++i)
            {
                const auto [it, inserted] = set.emplace(S.data() + i, len);
                if (!inserted)
                {
                    found = true;
                    longest = *it;
                    break;   
                }
            }
            
            if (found)
                beg = len + 1;
            else
                end = len - 1;
            
            set.clear();      
        }
            
        return {longest.begin(), longest.end()};
    }
};
