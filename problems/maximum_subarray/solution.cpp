class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int i,max=INT_MIN,maxending=0;
        for(i=0;i<nums.size();i++)
        {
            maxending= maxending+nums[i];
            if (max<maxending)
            {
                max=maxending;
            }   
            if (maxending<0)
            {
                maxending=0;
            }    
        }
        return max;
    }
};

