leetcode 48. Rotate Image
topic: Arrays
difficulty: Medium
class Solution {
    public:
        void rotate(vector<vector<int>>& matrix) {
            int m = matrix.size();
            int n = matrix[0].size();
            vector<vector<int>> matrixnew(n, vector<int>(m, 0));
    
            for(int i = 0; i < m; i++)
                for(int j = 0; j < n; j++)
                    matrixnew[j][m-1-i] = matrix[i][j];
    
            matrix = matrixnew; 
        }
    };