class Solution {
public:
    int maxArea(vector<int>& height) {
        int m;
        int max=0;
        int i=0,j=height.size()-1;
        while(i<j)
        {
            if(height[i]>height[j])
            {
              m=height[j]*(j-i); 
              j--;
            }
            else
            {
              m=height[i]*(j-i);
              i++;
            }
            if(max<m)
              max=m;
        }
        return max;
    }
};