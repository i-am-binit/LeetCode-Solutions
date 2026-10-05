class Solution {
public:
    int maxVowels(string s, int k) {
        int count = 0;
        int ans = 0;

        // First window
        for (int i = 0; i < k; i++) {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' ||
                s[i] == 'o' || s[i] == 'u') {
                count++;
            }
        }

        ans = count;

        // Sliding window
        for (int i = k; i < s.size(); i++) {

            // New character enters
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' ||
                s[i] == 'o' || s[i] == 'u') {
                count++;
            }

            // Old character leaves
            if (s[i - k] == 'a' || s[i - k] == 'e' || s[i - k] == 'i' ||
                s[i - k] == 'o' || s[i - k] == 'u') {
                count--;
            }

            ans = max(ans, count);
        }

        return ans;
    }
};