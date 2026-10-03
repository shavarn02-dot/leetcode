class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int> freq(26, 0);

        int left = 0;
        int maxFreq = 0;
        int maxi = 0;

        for (int right = 0; right < s.size(); right++) {

            freq[s[right] - 'A']++;

            maxFreq = max(maxFreq, freq[s[right] - 'A']);

            int windowSize = right - left + 1;
            int changes = windowSize - maxFreq;

            while (changes > k) {
                freq[s[left] - 'A']--;
                left++;

                windowSize = right - left + 1;
                changes = windowSize - maxFreq;
            }

            maxi = max(maxi, right - left + 1);
        }

        return maxi;
    }
};