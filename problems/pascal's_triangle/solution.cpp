class Solution {
public:
    vector<vector<int>> generate(int numRows) {
	    vector<vector<int>>v;
        int i,j;
	    for(i=0;i<numRows;i++)
        {
	    	vector<int>ve(i+1,1);
	    	for(j=1;j<i;j++) 
            {
	    		ve[j]=v[i-1][j]+v[i-1][j-1];
	    	}
	    	v.push_back(ve);
	    }
	    return v;
    }
};