class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int i,max=INT_MIN,maxed=0;
        int n=nums.size();
        for(i=0;i<n;i++)
        {
            maxed=maxed+nums[i];
            if (max<maxed)
            {
                max=maxed;
            }   
            if (maxed<0)
            {
                maxed=0;
            }    
        }
        return max;
    }
};

