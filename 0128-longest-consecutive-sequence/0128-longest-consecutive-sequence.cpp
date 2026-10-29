
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st;

        for(int x : nums){
            st.insert(x);
        }

        int maxi = 0;

        for(int x : st){
            if(st.find(x - 1) == st.end()){
                int current = x;
                int count = 1;

                while(st.find(current + 1) != st.end()){
                    current++;
                    count++;
                }

                maxi = max(maxi, count);
            }
        }

        return maxi;
    }
};
