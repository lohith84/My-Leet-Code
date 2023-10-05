class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
     vector<int> ans;
        
        int condition = floor(nums.size()/3);
        unordered_map<int,int> ump;
        for(int i=0;i<nums.size();i++){
            ump[nums[i]]++;
        }
        unordered_map<int,int>::iterator it;
        for(it=ump.begin();it!=ump.end();it++){
            if(it->second>condition){
                ans.push_back(it->first);
            }
        }
        return ans;

    }
};