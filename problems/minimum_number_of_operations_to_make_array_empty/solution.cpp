class Solution {
public:
    int minOperations(vector<int>& nums) {
        map<int,int>mpp;
        for(auto i:nums) mpp[i]++;
        int k=0;
        for(auto i:mpp){
            if(i.second<2) return -1;
            k+=((i.second+2)/3);
        }
        return k;
    }
};