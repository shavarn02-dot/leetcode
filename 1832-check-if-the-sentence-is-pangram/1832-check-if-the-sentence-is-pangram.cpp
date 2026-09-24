class Solution {
public:
    bool checkIfPangram(string sentence) {
        int n=sentence.length();
        set<int>ans;
        for(int i=0;i<n;i++){
            ans.insert(sentence[i]);
        }
    if (ans.size()!=26) return false;
    else return true;
    }
};