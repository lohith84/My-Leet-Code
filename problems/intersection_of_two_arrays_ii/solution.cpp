class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        map<int,int>c;
        int i;
        vector<int>v;
        for(i=0;i<nums1.size();i++)
        {
            c[nums1[i]]++;
        }
        for(i=0;i<nums2.size();i++)
        {
            if (c[nums2[i]] > 0)
            {
                c[nums2[i]]--; 
                v.push_back(nums2[i]);
            }
        }
        return v;
    }
};