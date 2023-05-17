class Solution {
public:
    int calPoints(vector<string>& v) {
        stack<string>S;
        int k=v.size();
        int n=0;
        int i,i1,i2,i3,i4,i5,i6;
        string s1,s2,s3,s4,s5,s6;
        for(i=0;i<k;i++)
        {
            if(v[i]=="+")
            {
                s1=S.top();
                S.pop();
                s2=S.top();
                S.pop();
                i1=stoi(s1);
                i2=stoi(s2);
                i3=i1+i2;
                s3=to_string(i3);
                s2=to_string(i2);
                s1=to_string(i1);
                S.push(s2);
                S.push(s1);
                S.push(s3);
            }
            else if(v[i]=="D")
            {
                s4=S.top();
                i4=stoi(s4);
                i5=i4+i4;
                s5=to_string(i5);
                S.push(s5);
            }
            else if(v[i]=="C")
            {
                S.pop();
            }
            else
            {
                S.push(v[i]);
            }
        }
        while(S.size()!=0)
        {
            s6=S.top();
            i6=stoi(s6);
            n=n+i6;
            S.pop();
        }
        return n;
    }
};