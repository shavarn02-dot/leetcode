class Solution {
public:
    int trap(vector<int>& height) {
        stack<int>st;
        int n=height.size();
        int hwater=0;
        for(int i=n-1;i>=0;i--){
            
        while(!st.empty() && height[st.top()]<height[i]){
            int mid = st.top();
            st.pop();
             if(st.empty())break;
            int left = st.top();
            int right = i;
            int width = left - right - 1;
            int h = min(height[left], height[right]) - height[mid];
            hwater+=h*width;
        }
        st.push(i);
        
        } 
        return hwater;
    }
};