Output Status:

Runtime: 164 ms, faster than 85.71% of C++ online submissions for Number of Valid Words for Each Puzzle.
Memory Usage: 44.9 MB, less than 63.81% of C++ online submissions for Number of Valid Words for Each Puzzle.



class Solution {
public:    
    unordered_map<int, int> s;
    vector<int> ans;    
    vector<int> findNumOfValidWords(vector<string>& words, vector<string>& puzzles) {
        vector<vector<int>> p(26);
        const int N = words.size();
        const int M = puzzles.size();
        ans.resize(M, 0);        
        for (int i = 0;i < N; ++i)
        {
            int k = 0;
            int cnt = 0;
            for (int j = 0;j < words[i].size(); ++j)
            {
                if ((k & (1<<(words[i][j]-'a'))) == 0)
                {
                    cnt++;
                    if (cnt > 7)break;
                    k = (k | (1<<(words[i][j]-'a')));
                }
            }
            if (cnt <= 7){
                if (s.find(k) == s.end())
                    s[k] = 1;
                else
                    s[k]++;
            }
        }
        int Q = s.size(), tmp;
        for (int i = 0;i < M; ++i)
        {
            vector<int> all_p;
            all_p.push_back(1<<(puzzles[i][0] - 'a'));
            for (int j = 0;j < puzzles[i].size(); ++j)
            {
                int K = all_p.size();
                for (int m = 0;m < K; ++m)
                    if ((all_p[m] & (1<<(puzzles[i][j] - 'a'))) == 0)
                        all_p.push_back(all_p[m] | (1<<(puzzles[i][j] - 'a')));
            }
            for (int j = 0;j < all_p.size(); ++j)
                if (s.find(all_p[j]) != s.end())
                    ans[i] += s[all_p[j]];
        }
        return ans;
    }
};
