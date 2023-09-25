class Solution {
public:
    char findTheDifference(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        int m=min(s.size(),t.size());
        for(int i=0;i<m;i++)
        {
            if(s[i]!=t[i]) return t[i]; 
        }
        return t.back();
    }
};