class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int target) {
        
        int m = mat.size();
        int n = mat[0].size();
        
        int lo, hi, mid;
        
        for (int i=0; i<m; i++){
            if (mat[i][0]<=target && mat[i][n-1]>=target){
                lo = 0;
                hi = n - 1;
				
                while (lo < hi){
                    mid = (lo + hi) / 2;
                    if (mat[i][mid] == target) return true;
                    else if (mat[i][mid] < target) lo = mid + 1;
                    else hi = mid;
                }
                if (lo==hi && mat[i][lo]==target) return true;
            }
        }
        return false;
    }
};