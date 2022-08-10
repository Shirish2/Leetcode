class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        //col
        int m = matrix[0].size();
        //row
        int n=matrix.size();
        int startrow=0;
        int endrow= n-1;
        int startcol=0;
        int endcol=m-1;
        vector<int> arr;
        while(startcol<=endcol and startrow<=endrow){
        //start row
        for(int col= startcol;col<=endcol;col++){
            arr.push_back(matrix[startrow][col]);
        }

        //endcol
        for(int row= startrow+1 ;row<=endrow;row++){
             arr.push_back(matrix[row][endcol]);
        }

        //endrow
        for(int col=endcol-1;col>=startcol;col--){
           if(startrow==endrow){
            break;
           }
             arr.push_back(matrix[endrow][col]);
        }

        //startcol
        for(int row=endrow-1;row>=startrow+1;row--){
            if(startcol==endcol){
                break;
            }
            arr.push_back(matrix[row][startcol]);
        }

        startrow++;
        startcol++;
        endrow--;
        endcol--;

        }
       return arr;
    }
     
};