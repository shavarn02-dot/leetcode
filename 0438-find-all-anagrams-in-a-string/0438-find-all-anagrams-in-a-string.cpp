class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int m=s.size();
        int n=p.size();
        vector<int> ans;
        if(n>m) return ans;
        
        unordered_map<char,int> windowmap;
        unordered_map<char,int> mp;
        for(char ch:p){
            mp[ch]++;
        }
        int j=n-1;
        for(int i=0;i<n;i++){
             windowmap[s[i]]++;
          }
        if(windowmap==mp) {
            ans.push_back(0);
        } 
         int i = 0;

        while(j < m - 1){
            windowmap[s[i]]--;

            if(windowmap[s[i]] == 0){
                windowmap.erase(s[i]);
            }

            i++;
            j++;

            windowmap[s[j]]++;

            if(windowmap == mp){
                ans.push_back(i);
            }
        }

        return ans;
    }
};