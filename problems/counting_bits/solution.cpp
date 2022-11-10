class Solution {
public:
    vector<int>countBits(int n)
    {
        vector<int>v;
        int i;
        for(i=0;i<=n;i++)
        {
            int c=0;
            int nu=i;
            while(nu!=0)
            {
                c=c+nu%2;
                nu=nu/2;
            }
            v.push_back(c);
        }
        return v;
    }
};