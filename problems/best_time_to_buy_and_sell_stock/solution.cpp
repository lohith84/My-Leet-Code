class Solution {
public:
        int maxProfit(vector<int> &prices) {
        int u=INT_MAX;
        int v=0;
        for(int i = 0; i < prices.size(); i++)
        {
            u=min(u,prices[i]);
            v=max(v,prices[i]-u);
        }
        return v;
    }
};