
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        string ans = "";
        for(int i = 0; i < strs[0].length(); i++){
            for(int j = 1; j < n; j++){
                if(i >= strs[j].length() || strs[0][i] != strs[j][i]){
                    return ans;
                }
            }
            ans.push_back(strs[0][i]);
        }

        return ans;
    }
};
