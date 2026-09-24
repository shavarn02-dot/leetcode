class Solution {
public:
    int balancedStringSplit(string s) {
        int n=s.length();
        int L=0;
        int R=0;
        int ans=0;
        for(int i=0;i<n;i++){
           if(s[i]=='R'){
            R+=1;
           }
           else{
            L+=1;
           }
           if(L==R){
            ans+=1;
            L=0;
            R=0;
           }
        }

        return ans;
    }
};