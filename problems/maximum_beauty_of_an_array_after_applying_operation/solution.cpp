class Solution {
public:
    int maximumBeauty(vector<int>& nums, int k) {
        map<int,int>mpp;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            mpp[nums[i]-k]++;
            mpp[nums[i]+k+1]--;
        }
        int t=0,s=0;
        for(auto i:mpp)
        {
            t=t+i.second;
            s=max(s,t);
        }
        return s;
    }
};