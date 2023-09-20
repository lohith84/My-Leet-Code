class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int t=0,n=nums.size();
        for(auto i:nums) t=t+i;
        t=t-x;
        if(t==0) return n;
        int i,m=0,curr=0,left=0;
        for(i=0;i<n;i++)
        {
            curr=curr+nums[i];
            while(left<=i and curr>t)
            {
                curr=curr-nums[left];
                left++;
            }
            if(curr==t)
            {
                m=max(m,i-left+1);
            }
        }
        int result;
        if(m) 
        {
            result=n-m;
        } 
        else
        {
            result = -1;
        }
    return result;
    }
};


        
