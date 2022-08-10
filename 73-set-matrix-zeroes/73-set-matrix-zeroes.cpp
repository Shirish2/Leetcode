class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        int arr[n][m];
         for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                arr[i][j]=1;       
            }
         }
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                
                if(matrix[i][j]==0){
                   for(int k=0;k<n;k++)
                    {
                        arr[k][j]=0;
                    }
                    for(int k=0;k<m;k++)
                    {
                        arr[i][k]=0;
                    }
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(arr[i][j]==0)
                {
                    matrix[i][j]=arr[i][j];
                }
                else
                {
                    matrix[i][j]=matrix[i][j];
                }
            }
        }
        
        
    }
};