
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n = strs.size();
        unordered_map<string, vector<string>> mp;
        for(int i = 0; i < n; i++){
            string word = strs[i];
            sort(word.begin(), word.end());

            mp[word].push_back(strs[i]);
        }
        vector<vector<string>> ans;

        for(auto it : mp){
            ans.push_back(it.second);
        }

        return ans;
    }
};
