class Solution {
public:
    int ans = 0;

    bool isPalindrome(string &s) {
        int i = 0, j = s.size() - 1;

        while (i < j) {
            if (s[i] != s[j])
                return false;

            i++;
            j--;
        }

        return true;
    }

    void solve(string &s, int i, string &a, string &b) {

        
        if (i == s.size()) {

            if (isPalindrome(a) && isPalindrome(b)) {
                ans = max(ans, (int)a.size() * (int)b.size());
            }

            return;
        }


        a.push_back(s[i]);
        solve(s, i + 1, a, b);
        a.pop_back();

        
        b.push_back(s[i]);
        solve(s, i + 1, a, b);
        b.pop_back();

        
        solve(s, i + 1, a, b);
    }

    int maxProduct(string s) {
        string a = "", b = "";

        solve(s, 0, a, b);

        return ans;
    }
};