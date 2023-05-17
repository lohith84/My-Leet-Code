class Solution {
public:
    bool isValid(string x) {
        int i;
        stack<char>s;   
        for(i=0;i<x.size();i++)
        {
            if(x[i]=='(' or x[i]=='{' or x[i]=='[' )
            {
                s.push(x[i]);
            }
            else
            {
                if(s.size()!=0 and
                ( (x[i]==')' and s.top()=='(') 
                or (x[i]=='}' and s.top()=='{') 
                or (x[i]==']' and s.top()=='[')) )
                {
                    s.pop();
                }
                else
                {
                    return 0;
                }
            }
        }
        if(s.size()==0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};


