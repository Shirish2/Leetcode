class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        vector<int> v1;
        int m=matrix.size();
        int n=matrix[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                v1.push_back(matrix[i][j]);
            }
        }
        sort(v1.begin(),v1.end());
        return v1[k-1];
    }
};