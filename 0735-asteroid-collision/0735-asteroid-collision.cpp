class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        int n= asteroids.size();
        stack<int> st;
        vector<int>ans;
        for(int i=n-1;i>=0;i--){
            int alive=1;
            while(!st.empty() && asteroids[i]>0 && st.top()<0){
                    if(asteroids[i]>abs(st.top())){
                        st.pop();
                        
                    }
                    else if(abs(asteroids[i])<abs(st.top())){
                        alive=0;
                        break;
                    }
                    else{
                        st.pop();
                        alive=0;
                        break;
                    }
                
               
            }
            if(alive==1){
            st.push(asteroids[i]);
        }           
        }
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        return ans;
    }
};