class Solution {
public:
    int maxScore(vector<int>& nums) {
        sort(nums.begin(),nums.end(),greater<int>());
        int i,b,k=0;
        b=nums.size();
        vector<long long>vt(b);
        if(nums[0]>0)
        {
            k++;
        }
        vt[0]=nums[0];
        for(i=1;i<b;i++)
        {
            vt[i]=vt[i-1]+nums[i];
            if(vt[i]>0)
            {
                k++;
            }
            cout<<vt[i]<<" ";
        }
        cout<<endl;
        return k;
    }
};