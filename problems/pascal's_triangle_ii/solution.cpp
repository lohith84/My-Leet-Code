class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int>v(rowIndex+1,0);
        {
            int i;
            v[0]=1;
            for(i=1;i<rowIndex+1;i++)
            {
                v[i]=int ((long( v[i-1])*(rowIndex-i+1))/i);
            }
        }
        return v;
    }
};