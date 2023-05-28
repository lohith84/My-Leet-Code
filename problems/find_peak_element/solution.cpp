class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        if(nums.size()==1)
        {
            return 0;
        } 
        if(nums[0]>nums[1])
        {
            return 0;
        }
        if(nums[nums.size()-1]>nums[nums.size()-2])
        {
            return (nums.size()-1);
        }
        int i=1;
        int j=nums.size()-2;
        while(i<=j)
        {
            int m=i+(j-i)/2;
            if(nums[m]>nums[m-1] and nums[m]>nums[m+1])
            {
                return m;
            }
            else if(nums[m]<nums[m+1])
            {
                i=m+1;
            }
            else if(nums[m]<nums[m-1])
            {
                j=m-1;
            }
        }
        return -1;
    }
};