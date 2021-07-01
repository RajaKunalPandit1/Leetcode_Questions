class Solution {
public:
    bool isPalindrome(string s) {
        int n= s.length();
        
        int low=0,high= n-1;
        
        while(low<high){
            
            if (!isalnum(s[low])){
                low++;
            }
            
            else if(!isalnum(s[high])){
                high--;
            }
            
            else if(tolower(s[low])!=tolower(s[high])){
                return false;
            }else{
                low++;
                high--;
            }
              
            

        }
        return true;
        
    }
};

// Another Solution

bool isPalindrome(string s) {
    for (int i = 0, j = s.size() - 1; i < j; i++, j--) { // Move 2 pointers from each end until they collide
        while (isalnum(s[i]) == false && i < j) i++; // Increment left pointer if not alphanumeric
        while (isalnum(s[j]) == false && i < j) j--; // Decrement right pointer if no alphanumeric
        if (toupper(s[i]) != toupper(s[j])) return false; // Exit and return error if not match
    }
    
    return true;
}

// Another Solution 

class Solution {
public:
    bool isPalindrome(string s) {
        int i = 0, j = s.length() - 1;
        while(i <= j){
            while(i <=j && !isalnum(s[i]))
                i++;
            while(j >=0 && !isalnum(s[j]))
                j--;
            if(i <= j && tolower(s[i]) != tolower(s[j]))
                return false;
            i++;
            j--;
        }
        return true;
    }
};
