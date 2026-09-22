class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans;
        int depth = 0;
        for(int i = 0;i<s.size();i++){
            if(s[i]=='('){
                if(depth>0){
                    ans+=s[i];
                    depth++;
                }
                else{
                    depth++;
                }
            }
            else{
                if(depth>1){
                    ans+=s[i];
                    depth--;
                }
                else{
                    depth--;
                }
            }
        }
        return ans;
    }
};