class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        set<pair<int,int>>s;
        for(int i=0;i<mat.size();i++)
         {
            int count=0;
            for(int j=0;j<mat[i].size();j++) 
            {
                if(mat[i][j]==1) 
                {
                    count++;
                }
            }
            s.insert({count,i});
        }
        vector<int>v;
        auto i=s.begin();
        while(k>0 and i!=s.end()){
            v.push_back(i->second);
            k--;
            i++;
        }
        return v;
    }
};