class Solution {
public:
    int numIdenticalPairs(vector<int>& a) {
        int i,j,k=0;
        int n=a.size();
        map<int,int>mp;
        for(i=0;i<n;i++)
        {
            mp[a[i]]++;
        }
        int q;
        for(auto i:mp)
        {
            q=i.second;
            k=k+(q*(q-1)/2);
        }
        return k;
    }
};