class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int> st;
        int i=0;
        int n=heights.size();
        int maxArea=0;
        int area=0;
        while(i<n) {
            if(st.empty()||heights[i]>=heights[st.top()])
                st.push(i++);
            else {
                int index=st.top();
                st.pop();
                if(st.empty()) area=heights[index]*i;
                else area=heights[index]*(i-st.top()-1);
                maxArea=max(maxArea,area);
            }
        }      
        while(!st.empty()) {
            int index=st.top();
            st.pop();
            if(st.empty()) area=heights[index]*i;
            else area=heights[index]*(i-st.top()-1);
            maxArea=max(maxArea,area);
        }      
        return maxArea;
    }
};