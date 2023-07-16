class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int k=0,n=nums.size();
        for(int i=0;i<n;i++)
        {
            int x=i+1;
            if(n%x==0)
            {
                k=k+pow(nums[i],2);
            }
        }
        return k;
    }
};