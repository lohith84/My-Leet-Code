class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int>v,k;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0) v.push_back(nums[i]);
            else k.push_back(nums[i]);
        }
        for(auto i:k)
        {
            v.push_back(i);
        }
        return v;
    }
};