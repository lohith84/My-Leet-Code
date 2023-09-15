class Solution {
public:

    int numDistinct(string s, string t)
    {
        int n = s.size(),m=t.size();
     vector<double>dp(m+1);
        dp[0]=1;
        for(int i=1;i<n+1;i++)
        {
            for(int j=m;j>=1;j--)
            {
                if(s[i-1]==t[j-1])
                dp[j] = dp[j-1]+dp[j];
            }
        }
        return dp[m];
    }
};