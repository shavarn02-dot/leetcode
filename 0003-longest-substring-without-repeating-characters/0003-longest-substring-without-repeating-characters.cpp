class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> mp;
        int n=s.length();
        int maxlen=0;
        int left=0;
        for(int right=0;right<n;right++){
           
           if(mp.find(s[right])!=mp.end()){
              int oldindex=mp[s[right]];
              left = max(left, oldindex + 1);
              mp[s[right]]=right;
              maxlen=max(maxlen,right-left+1);
           }
           else{
            mp[s[right]]=right;
            maxlen=max(maxlen,right-left+1);
           }

        }
        return maxlen;
    }
};