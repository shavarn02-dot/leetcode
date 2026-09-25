class Solution {
public:
    string largestOddNumber(string num) {
        int n=num.length();
        string ans;
        for(int i=n-1;i>=0;i--){
            if((num[i]-'0')%2==0){
                continue;
            }
            else{
                for(int m=i;m>=0;m--){
                    ans.push_back(num[m]);
                }
            }
            break;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};