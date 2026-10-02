class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<char> st;

        int left = 0;
        int right = 0;
        int ans = 0;

        while (right < s.length()) {

            while (st.find(s[right]) != st.end()) {
                st.erase(s[left]);
                left++;
            }

            st.insert(s[right]);

            int len = right - left + 1;
            ans = max(ans, len);

            right++;
        }

        return ans;
    }
};