
class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.length();
        int m = needle.length();

        int i = 0;
        int j = 0;

        if(m == 0){
            return 0;
        }
        while(i < n){
            if(haystack[i] == needle[j]){
                i++;
                j++;

                if(j == m){
                    return i - m;
                }
            }
            else{
                i = i - j + 1;
                j = 0;
            }
        }
    return -1;
    }
};
