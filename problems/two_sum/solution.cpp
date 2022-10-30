class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target)
    {
        int i;
        vector<int> v;
        unordered_map<int,int>mpp;
        for(i=0;i<nums.size();i++)
        {
            if(mpp.find(target-nums[i])!=mpp.end())
            {
                v.push_back(mpp[target-nums[i]]);
                v.push_back(i);
                return v;
            }
            else
            {
                 mpp[nums[i]]=i;
            }
        }
       return v;
    }
};

