class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
		reverse(sandwiches.begin(), sandwiches.end());
		stack<int>s; 
		queue<int>q; 
        int i;
        int n=sandwiches.size();
        int m=students.size();
		for(i=0;i<n;i++)
        {
			s.push(sandwiches[i]);
		}
		for(i=0;i<m;i++)
        {
			q.push(students[i]);
		}
		int k=0;
		while(!s.empty())
        {
			if(s.top()==q.front())
            { 
				q.pop();
				s.pop();
                k=0;
			}
			else
            {
				int t=q.front();
				q.pop();
				q.push(t);
				k++;
				if(k>=q.size())
                {
					break;
				}
			}
		}
		return s.size();
	}
};
