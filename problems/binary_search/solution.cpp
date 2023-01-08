class Solution {
public:
    int search(vector<int>& nums, int target) {
        int strt=0;
		int nd=nums.size();
		int md=0;
		if(nums[0]==target)
		{
            return 0;
        }	
		while(strt!=nd)
		{
			md=(strt+nd)/2;
			if(nums[md]==target)
			{
                return md;
            }
			if(target>nums[md])
			{
                strt=md+1;
            }
			else
			{
                nd=md;
            }	
		}
		return -1;
    }
};