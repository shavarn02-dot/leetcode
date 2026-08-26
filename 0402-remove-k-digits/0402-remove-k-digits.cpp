class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<char> st;
        int n=num.size();
        string ans = "";
        for(int i=0;i<n;i++){
            while(!st.empty() && k>0 && st.top()>num[i]){
                st.pop();
                k--;
            }
            st.push(num[i]);
        }
        while(!st.empty() && k>0){
                st.pop();
                k--;
            }
        while(!st.empty()){
                ans+=st.top();
                st.pop();
        }
        reverse(ans.begin(), ans.end());  
        for(int i = 0; i < ans.size(); i++){
        if(ans[i] != '0'){
        return ans.substr(i);
        }
      } 
      return "0"; 
    }
};