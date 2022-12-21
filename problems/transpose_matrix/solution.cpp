class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        vector<int>v;
        vector<vector<int>>ve;
        int i,j;
        for(j=0;j<matrix[0].size();j++)
        {
            v.clear();
            for(i=0;i<matrix.size();i++)
            {
                v.push_back(matrix[i][j]);
            }
            ve.push_back(v);
        }
        return ve;
    }       
};