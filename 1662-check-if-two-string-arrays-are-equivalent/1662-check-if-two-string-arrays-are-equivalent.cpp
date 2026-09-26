class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        int n=word1.size();
        int m=word2.size();
        string one;
        string two;
        
        for(int i=0;i<n;i++){
            one+=word1[i];
        }

        for(int i=0;i<m;i++){
            two+=word2[i];
        }
        
        if(one==two) return true;
        else return false;
    }
};