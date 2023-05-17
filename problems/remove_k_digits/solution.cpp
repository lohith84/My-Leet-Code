class Solution {
public:
    string removeKdigits(string& num, int k) {
        if(num.size()<=k)
        {
            return "0";
        }
        stack<char>s;
        int i;
        for(i=0;i<num.size();i++)
        {
            int n=num[i];
            while(!s.empty() and k>0 and s.top()>n)
            {
                s.pop();
                k--;
            }
            if(!s.empty() or n!='0')
            {
                s.push(n);
            }
        }
        
        while(!s.empty() and k>0)
        {
            s.pop();
            k--;
        }
        if(s.empty())
        {
            return "0";
        }
        string sum="";
        while(!s.empty())
        {
            sum.push_back(s.top());
            s.pop();
        }
        reverse(sum.begin(),sum.end());
        return sum;
    }
};