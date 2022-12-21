class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i,j,n;
        int p=0;
        n=prices.size();
        for(i=0;i<n-1;i++)
        {
            if(prices[i]<prices[i+1])
            {
                p=p+prices[i+1]-prices[i];
            }
        }
        return p;
    }
};