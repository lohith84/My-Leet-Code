class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0,k=0;
        int j=height.size()-1;
        while(i<j)
        {
            
            if(height[i]<height[j])
            {
                k=max(k,(j-i)*height[i]);
                i++;
            }
            else
            {
                k=max(k,(j-i)*height[j]);
                j--;
            }
        }
        return k;
    }
};