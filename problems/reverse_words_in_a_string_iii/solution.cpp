class Solution {
public:
    string reverseWords(string s) 
    {
        int n=s.size(),a=0,b=0;
        while(a<n)
        {
            while(b<n and s[b]!=' ')
            {
                b++;
            }
            reverse(s.begin()+a,s.begin()+b);
            a=b+1;
            b=a;
        }
        return s;
    }
};