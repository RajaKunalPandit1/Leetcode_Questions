class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int r = matrix.size();
        int c = matrix[0].size();
        
        int i=r-1,j=0;
        
        while(i>=0 && j<c){
            
            if(matrix[i][j]==target){
                return true;
            }else if(matrix[i][j]>target){
                i--;
            }else{
                j++;
            }
            
        }
        return false;
        
        
    }
};

// Another Solution Using Binary Search

class Solution {
public:
    bool searchMatrix(vector<vector<int>> &m, int t) {
        // pointless edge case we still have to consider
		if (!m.size() || !m[0].size()) return false;
        // support variables
		int row, l = 0, r = m.size() - 1, mid;
        while (l < r) {
            mid = (l + r) / 2;
            // moving l up if needed
            if (m[mid].back() < t) l = mid + 1;
            // moving r down if needed
            else if (m[mid][0] > t) r = mid - 1;
            // we found our row!
            else {
                l = mid;
                break;
            };
        }
        // storing the value of the new found row
        row = l;
        // resetting l and r to run a binary search on the rows
        l = 0;
        r = m[0].size() - 1;
        while (l <= r) {
            mid = (l + r) / 2;
            // moving l up if needed
            if (m[row][mid] < t) l = mid + 1;
            // moving r down if needed
            else if (m[row][mid] > t) r = mid - 1;
            // we found our value!
            else return true;
        }
        return false;
    }
};

// Another Solution 

const searchMatrix = (matrix, target) => {
    let rows = matrix.length;
    if (rows === 0) {return false}
    let cols = matrix[0].length;
    if (cols === 0) {return false}
    // total number of elements is rows*cols
    // can be numbered from zero to rows*cols - 1
    let left = 0, right = rows * cols - 1

    let locate = n => [Math.floor(n/cols), n%cols];

    while (left < right) {
        let mid = left + Math.floor((right - left) / 2);
        let [r, c] = locate(mid);
        if (matrix[r][c] >= target) {
            right = mid
        } else {
            left = mid + 1
        }
    }
    let [r, c] = locate(left);
    return matrix[r][c] === target
}

// Another Solution 

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int start = 0;
        int end = matrix.size();
        if(end == 0) return false;
        int len = matrix[0].size();
        end = end * len - 1;
        

        int mid;
        while(start <= end){
            mid = (start + end)/2;
            
            int i = start / len;
            int j = start % len;
            if(matrix[i][j] > target) return false;
            if(matrix[i][j] == target) return true;
            
            i = end / len;
            j = end % len;
            if(matrix[i][j] < target) return false;
            if(matrix[i][j] == target) return true;
            
            i = mid / len;
            j = mid % len;
            if(matrix[i][j] == target) return true;
            if(matrix[i][j] < target) {
                start = mid + 1;
                end --;
            } else {
                start++;
                end = mid - 1;
            }
        }
        
        return false;

    }
};
