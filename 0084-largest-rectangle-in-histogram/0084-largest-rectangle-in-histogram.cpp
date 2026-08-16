class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
        stack<int> st;
        int maxi=0;
        for(int i=n-1;i>=0;i--){
            //int largerect=0;
          
            while(!st.empty() && heights[st.top()]>=heights[i]){
            
                
                //largerect+=1;
                int index=st.top();
                int height=heights[index];

                st.pop();
                //int rightboundary=st.top();
                
                int leftboundary=i;
                int rightboundary;
                if(st.empty())
                   rightboundary = n;
                else
                   rightboundary = st.top();
                int width = rightboundary - leftboundary - 1;
                int area=height * width;
                maxi=max(maxi,area);
            }
           
            st.push(i);
          
        }
         
            while(!st.empty()) {
            int index=st.top();
                int height=heights[index];

                st.pop();
                
                int leftboundary=-1;
                int rightboundary;
                if(st.empty())
                   rightboundary = n;
                else
                   rightboundary = st.top();
                int width = rightboundary - leftboundary - 1;
                int area=height * width;
                maxi=max(maxi,area);
}

        return maxi;
    }
};