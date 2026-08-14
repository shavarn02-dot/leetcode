class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<pair<int,int>> st;
        //vector<int> ans;
        vector<int> ans(temperatures.size(), 0);
        int n=temperatures.size();
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && st.top().first<=temperatures[i]){
                st.pop();
            }

            if(st.empty()){
                ans[i]=0;
            }
            else{
                ans[i]=(st.top().second)-i;
            }

            st.push({temperatures[i],i});
        }
        return ans;
    }
};