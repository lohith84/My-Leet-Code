class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        //reverse(asteroids.begin(),asteroids.end());
        stack<int>s;
        vector<int>v;
        for(auto i : asteroids)
        {
            if(i>0)
            {
                s.push(i);
            } 
            else
            {    
                while(s.size()>0 and s.top()>0 and s.top()<-1*i)
                {
                    s.pop();
                }
                if(s.size()>0 and s.top()==-1*i)
                {
                    s.pop();
                }
                else if(s.size()>0 and s.top()>-1*i)
                {
                   continue;
                }
                else
                {
                    s.push(i);
                }
            }
        }
        while(!s.empty()) 
        {
            v.push_back(s.top());
            s.pop();
        }
        reverse(v.begin(),v.end());
        return v;
    }
};