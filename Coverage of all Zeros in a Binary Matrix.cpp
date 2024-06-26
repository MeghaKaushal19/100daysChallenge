class Solution {
  public:
    int findCoverage(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        int delRow[]={-1,0,1,0};
        int delCol[]={0,1,0,-1};
        int coverage = 0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j] == 0){
                    for(int k=0;k<4;k++){
                        int newRow = i+delRow[k];
                        int newCol = j+delCol[k];
                        if(newRow>=0 && newRow<n && newCol>=0 && newCol<m){
                            if(matrix[newRow][newCol] == 1)coverage++;
                        }
                    }
                }
            }
        }
    
        return coverage;
    }
};

