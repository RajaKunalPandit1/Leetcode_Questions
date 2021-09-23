Output Status:

Runtime: 4 ms, faster than 95.17% of C++ online submissions for Maximum Length of a Concatenated String with Unique Characters.
Memory Usage: 8.2 MB, less than 86.44% of C++ online submissions for Maximum Length of a Concatenated String with Unique Characters.


class Solution {

    int *bits, pos = 0, res = 0, curr = 0, currBit = 0;
    void dfs(vector<string>& arr, int start = 0) {
        if (res == 26) return;
        res = max(res, curr);
        if (start == pos) {
            return;
        }
        for (int i = start; i < pos; i++) {
            if ((currBit & bits[i]) == 0) {
                curr += arr[i].size();
                currBit ^= bits[i];
                dfs(arr, i + 1);
                curr -= arr[i].size();
                currBit ^= bits[i];
            }
            
        }
    }
public:
    int maxLength(vector<string>& arr) {
        bits = new int[arr.size()];
        for (auto &s: arr) {
            int bit = 0, tmp;
            for (char c: s) {
                tmp = 1 << (c - 'a');
                if (bit & tmp) {
                    bit = 0;
                    break;
                }
                bit |= tmp;
            }
            bits[pos++] = bit;
        }
        pos--;
        for (int i = 0; i <= pos; i++) {
            if (bits[i]) continue;
            swap(arr[i], arr[pos]);
            swap(bits[i--], bits[pos--]);
        }
        pos++;
        dfs(arr);
        return res;
    }
};
