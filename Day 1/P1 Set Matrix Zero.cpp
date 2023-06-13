 
 // Program 1

 class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size(); 
        int m = matrix[0].size();
        vector<vector<int>> visited = matrix;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(matrix[i][j] == 0){
                    for(int k=0; k<m; k++){
                        visited[i][k] = 0;
                    }
                }
            }
        }
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(matrix[i][j] == 0){
                    for(int k=0; k<n; k++){
                        visited[k][j] = 0;
                    }
                }
            }
        }
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                matrix[i][j] = visited[i][j];
            }
        }
    }
};

// Program 2

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
       int R = matrix.size();
       int C = matrix[0].size();
       set<int> rows;
       set<int> cols;

       for(int i = 0; i<R; i++){
           for(int j=0; j<C; j++){
               if(matrix[i][j] == 0){
                   rows.insert(i);
                   cols.insert(j);
               }
           }
       } 
       for(int i=0; i<R ; i++){
           for(int j = 0; j<C; j++){
               if (rows.count(i) || cols.count(j)){
                   matrix[i][j] = 0;
               }
           }
       }
    }
};
