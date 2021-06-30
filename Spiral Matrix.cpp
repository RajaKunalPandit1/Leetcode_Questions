class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        
        int n=matrix.size();
        int m=matrix[0].size();
        int left=0,right=m-1,bottom=n-1,top=0;
        int direction=1;
        vector<int> v;
        while(left<=right && top<=bottom)
        {
            if(direction==1)
            {
                for(int i=left;i<=right;i++) v.push_back(matrix[top][i]);
                direction=2;
                top++;
            }
            
            else if(direction==2)
            {
                for(int i=top;i<=bottom;i++) v.push_back(matrix[i][right]);
                direction=3;
                right--;
            }
            
            else if(direction==3)
            {
                for(int i=right;i>=left;i--) v.push_back(matrix[bottom][i]);
                direction=4;
                bottom--;
            }
            
            else if(direction==4)
            {
                for(int i=bottom;i>=top;i--) v.push_back(matrix[i][left]);
                direction=1;
                left++;
            }
        }
        return v;
        
    }
};

// Another Solution Also With 4 Pointers


 vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> spiral; // to store the resulting array
		
		//initializing top, bottom, left and right
        int top = 0;
        int bottom = matrix.size() - 1;
        int left = 0;
        int right = matrix[0].size() - 1;
		
		//initializing direction
        int direction = 0; 

        while(top <= bottom && left <= right){
			
			
            if(direction == 0){
				//left -> right
                for(int i = left; i <= right; i++){
                    spiral.push_back(matrix[top][i]);
                }
                top++;
            }
            else if(direction == 1){
				//top -> bottom
                for(int i = top; i <= bottom; i++){
                    spiral.push_back(matrix[i][right]);
                }
                right--;
            }
            else if(direction == 2){
				//right -> left
                for(int i = right; i >= left; i--){
                    spiral.push_back(matrix[bottom][i]);
                }
                bottom--;
            }
            else if(direction == 3){
				//bottom -> top
                for(int i = bottom; i >= top; i--){
                    spiral.push_back(matrix[i][left]);
                }
                left++;
            }
			
			//increment the value of direction
            direction = (direction + 1) % 4;


        }

        return spiral;
    }

// Another Solution

    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        if(matrix.size()==0)return ans;
        int n=matrix.size(),m=matrix[0].size();
        int top=0,left=0,right=m-1,bottom=n-1;
        int size=n*m;
        while(ans.size()<size)
        {
            for(int i=left;i<=right&&ans.size()<size;i++)
                ans.push_back(matrix[top][i]);
            top++;
            for(int i=top;i<=bottom&&ans.size()<size;i++)
                ans.push_back(matrix[i][right]);
            right--;
            for(int i=right;i>=left&&ans.size()<size;i--)
                ans.push_back(matrix[bottom][i]);
            bottom--;
            for(int i=bottom;i>=top&&ans.size()<size;i--)
                ans.push_back(matrix[i][left]);
            left++;
        }
        return ans;
    }

// Another Solution

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        
        int m = matrix.size();
        int n = matrix[0].size();
        
        // 4 rods starting
        int m_start = 0;
        int m_end   = m-1;
        int n_start = 0;
        int n_end   = n-1;
        
        vector<int> ans;
            
        while(m_start <= m_end && n_start <= n_end){
            
            for(int i=n_start;i<=n_end;i++){
                ans.push_back(matrix[m_start][i]);
            }

            for(int i=m_start+1; i<=m_end-1; i++){
                ans.push_back(matrix[i][n_end]);
            }
            
            if (m_start != m_end){
                for(int i=n_end; i>=n_start; i--){
                    ans.push_back(matrix[m_end][i]);
                }
            }
            
            if (n_start != n_end){
                for(int i=m_end-1; i>=m_start+1; i--){
                    ans.push_back(matrix[i][n_start]);
                }
            }
            
            m_start++; m_end--;
            n_start++; n_end--;
        }
        return ans;
    }
};
