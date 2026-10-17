class Solution {
public:
    int maxVowels(string s, int k) {
        int n = s.length();
        int left = 0;
        int right = k - 1;
        int maxi = 0;
        int count = 0;

        for(int i = left; i <= right; i++){
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' ||
               s[i] == 'o' || s[i] == 'u'){
                count++;
            }
        }
        maxi = count;
        while(right < n - 1){
            if(s[left] == 'a' || s[left] == 'e' || s[left] == 'i' ||
               s[left] == 'o' || s[left] == 'u'){
                count--;
            }
            left++;
            right++;
            if(s[right] == 'a' || s[right] == 'e' || s[right] == 'i' ||
               s[right] == 'o' || s[right] == 'u'){
                count++;
            }

            maxi = max(maxi, count);

            if(maxi == k){
                return k;
            }
        }

        return maxi;
    }
};