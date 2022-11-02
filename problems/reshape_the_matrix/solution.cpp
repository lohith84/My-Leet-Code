class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int m=size(mat);
        int n=size(mat[0]);
        int k=m*n,i;
        if(r*c!=k)
        {
            return mat;
        } 
        vector<vector<int>> v(r, vector<int>(c));
        for(i=0;i<k;i++) 
        {
            v[i/c][i%c]=mat[i/n][i%n];   
        }   
        return v;
    }
};