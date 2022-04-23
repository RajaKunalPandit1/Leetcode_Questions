Output Status :

Runtime: 4 ms, faster than 70.07% of C++ online submissions for Encode and Decode TinyURL.
Memory Usage: 7.6 MB, less than 9.59% of C++ online submissions for Encode and Decode TinyURL.

class Solution {
public:

    unordered_map<string, string> codeDB, urlDB;
    const string chars = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    
    string getCode() {
        string code = "";
        for (int i = 0; i < 6; i++) code += chars[rand() % 62];
        return "http://tinyurl.com/" + code;
    }
    
    string encode(string longUrl) {
        if (urlDB.find(longUrl) != urlDB.end()) return urlDB[longUrl];
        string code = getCode();
        while (codeDB.find(code) != codeDB.end()) code = getCode();
        codeDB[code] = longUrl;
        urlDB[longUrl] = code;
        return code;
    }

    string decode(string shortUrl) {
        return codeDB[shortUrl];
    }
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));
