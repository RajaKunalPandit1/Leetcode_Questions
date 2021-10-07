Output Status:

Runtime: 8 ms, faster than 83.40% of C++ online submissions for Valid Anagram.
Memory Usage: 7.3 MB, less than 77.84% of C++ online submissions for Valid Anagram.


class Solution {
public:
    bool isAnagram(string s, string t) {
        
        int n1 = s.length();
        int n2 = t.length();
        bool flag = true;
        
        int arr[256] = {0};
        
        if(n1!=n2){
            return false;
        }
        
        for(int i=0;i<n1;i++){
            arr[s[i]]++;
            arr[t[i]]--;
        }
        
        for(int i=0;i<256;i++){
            if(arr[i]!=0){
                flag = false;
                break;
            }
        }
        return flag;
        
    }
};

// Another Solution 


class Solution {
public:
    
    bool isAnagram(string s, string t) {
        unordered_map<char,int> hash;    //created a hashmap to mantain the count of char in               both strings s & t
        bool result = true;
        //if the lengths arent equal then it wont be an anagram hence return false
        if(s.length() != t.length())
            return !result;
        else
        {
            //initially all the counts of each char is 0
            //we traverse throught the length of string and increment count by 1 when its  encountered in s and decrement it for the char at given index in string t
            for(int i = 0; i < s.length(); i++)
            {
                hash[s[i]]++;
                hash[t[i]]--;
            }
            //at the end of this loop if we have a valid anagram then all the char should  have been once incremented and once decremented thus amounting to 0
            //but if we get a single value to not be equal to zero then we break out of the  loop and return false
            for(auto x : hash)
            {
                if(x.second != 0)
                {
                    result = false;
                    break;
                }
            }
            return result;
        }
        
    }
};
