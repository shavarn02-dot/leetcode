class Solution {
public:
    string toLowerCase(string s) {
        string ans;
        int n=s.length();
        for(int i=0;i<n;i++){
           ans.push_back(tolower(s[i])); 
        }
        return ans;
    }
};