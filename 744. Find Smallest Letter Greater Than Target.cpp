Output Status : 

Runtime
17 ms
Beats
59.10%
Memory
15.7 MB
Beats
96.78%

class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        
        int n = letters.size();
        char res = letters[0];

        for(int i=0;i<n;i++){
            if(letters[i] > target){
                res = letters[i];
                break;
            }
        }
        return res;
    }
};

// Another Sol : 

class Solution {
public:
    char nextGreatestLetter(vector<char>& a, char x) {
        
        int n = a.size();

        //hi starts at 'n' rather than the usual 'n - 1'. 
        //It is because the terminal condition is 'lo < hi' and if hi starts from 'n - 1', 
        //we can never consider value at index 'n - 1'
        int lo = 0, hi = n;

        //Terminal condition is 'lo < hi', to avoid infinite loop when target is smaller than the first element
        while (lo < hi) {
            int mid = lo + (hi - lo) / 2;
            if (a[mid] > x)     hi = mid;
            else    lo = mid + 1;                 //a[mid] <= x
        }
 
        //Because lo can end up pointing to index 'n', in which case we return the first element
        return a[lo % n];
    }
};
