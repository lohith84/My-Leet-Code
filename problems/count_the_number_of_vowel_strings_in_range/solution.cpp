class Solution {
public:
    int vowelStrings(vector<string>& words, int left, int right) {
        int i,k=0,b;
        string stg;
        for(i=left;i<=right;i++)
        {
            stg=words[i];
            b=stg.size();
            if((stg[0]=='a' or stg[0]=='e' or stg[0]=='o' or stg[0]=='i' or stg[0]=='u') and (stg[b-1]=='a' or stg[b-1]=='e' or stg[b-1]=='i' or stg[b-1]=='o' or stg[b-1]=='u'))
            {
                k++;
            }
        }
        return k;
    }
};