class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        int n=words.size();
        string ans;
        for(int i=0;i<n;i++){
        const string& word = words[i];
        int m=word.length();
        if(m==1) return word;
        int count=0;
        for(int j=0;j<m/2;j++){
            if(word[j]==word[m-1-j]) count+=1;

            else break;
        }
        if(count==m/2) return word;
        else continue;
    }
       return ans;
    }
};