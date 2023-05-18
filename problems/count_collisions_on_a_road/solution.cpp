class Solution {
public:
    int countCollisions(string directions)
    {
        stack<char>s;
        s.push(directions[0]); 
        int k=0;
        for(int i=1;i<directions.size();i++)
        {
            char t=directions[i];
            if(!s.empty() and s.top()=='R' and t=='L')  
            {
                k=k+2;
                s.pop();  
                s.push('S'); 
            }
            else if(!s.empty() and s.top()=='R' and t=='S') 
            {
                k=k+1;
                s.pop();   
                s.push('S');
            }
            else if(!s.empty() and s.top()=='S' and t=='L')  
            {
                k=k+1;
            }    
            else
            {
                s.push(t);
            }   
        } 
        while(!s.empty() and s.top()=='R')
        {
            s.pop();
        }  
        while(!s.empty()) 
        {
            if(s.top()=='R')
            {
                k++;
            }
            s.pop();
        }
        return k;
    }
};