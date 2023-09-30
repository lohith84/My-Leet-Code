class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        reverse(nums.begin(),nums.end());
        int c=0,f=0;
        set<int>s;
        for(int i:nums){
            if(i<=k) s.insert(i);
            c++;
            if(s.size()==k){
                f=1;
                break;
            }
        }
        if(f==1) return c;
        return -1;
    }
};