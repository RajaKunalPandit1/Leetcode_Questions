class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
     
        int n = matrix.size();
       
        
        
        vector<vector<int>>res;
        
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        
    
            for(int i=0;i<n;i++){
              int low=0,high = n-1;
                while(low<high){
                swap(matrix[i][low],matrix[i][high]);
                    low++;
                    high--;
            }
        
        }
        
        
    }
};

// Another Solution

void rotate(vector<vector<int>>& matrix) 
    {
        int n = matrix.size();
        int s = 0, e = n-1;
        
        for(int i=0; i<n/2; i++)
        {
            int k = 0;
            for(int j=i; j<n-i-1; j++)
            {
                int temp = matrix[s][s+k];
                matrix[s][s+k] = matrix[e-k][s];
                matrix[e-k][s] = matrix[e][e-k];
                matrix[e][e-k] = matrix[s+k][e];
                matrix[s+k][e] = temp;
                k++;
            }
            s++;
            e--;
        }
    }


// Another Solution Using Swaps Groups of 4s   https://leetcode.com/problems/rotate-image/discuss/1175659/Short-and-Easy-Solutions-w-Clear-Explanation-and-Diagrams!


void rotate(vector<vector<int>>& m) {
	int n = size(m), tmp;
	for(int i = 0; i < (n + 1) / 2; i++){
		for(int j = 0; j < n / 2; j++){
			tmp = m[n - 1 - j][i];
			m[n - 1 - j][i] = m[n - 1 - i][n - 1 - j];
			m[n - 1 - i][n - 1 - j] = m[j][n - 1 - i];
			m[j][n - 1 - i] = m[i][j];                
			m[i][j] = tmp;
		}
	}        
}

// Another Solution Using Swap Ring-by-Ring

void rotate(vector<vector<int>>& m) {
	int n = size(m), tmp;
	for(int i = 0; i < n / 2; i++){
		for(int j = i; j < n - 1 - i; j++){
			tmp = m[i][j];
			m[i][j] = m[n - 1 - j][i];
			m[n - 1 - j][i] = m[n - 1 - i][n - 1 - j];
			m[n - 1 - i][n - 1 - j] = m[j][n - 1 - i];
			m[j][n - 1 - i] = tmp;
		}            
	}
}
