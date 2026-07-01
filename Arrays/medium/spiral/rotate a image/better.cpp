leetcode 48. Rotate Image
topic: Arrays
difficulty: Medium
class Solution {
    public:
        void rotate(vector<vector<int>>& matrix) {
            int m = matrix.size();
            for(int i=0;i<m;i++){
                for(int j=i+1;j<m;j++){
                    swap(matrix[i][j],matrix[j][i]);
                }
            }
            for(int i=0;i<m;i++){
            int p=0,p1=m-1;
            while(p<p1){
                swap(matrix[i][p],matrix[i][p1]);
                p++;
                p1--;
            }
        }
    
        }
    };