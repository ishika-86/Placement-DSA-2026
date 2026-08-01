class Solution {
public:
    int search(string &pat, string &txt) {
        vector<int> freq(26, 0);

        for (char c : pat) freq[c - 'a']++;

        int cnt = 0;
        for (int x : freq)
            if (x) cnt++;

        int i = 0, j = 0, k = pat.size(), ans = 0;

        while (j < txt.size()) {
            if (--freq[txt[j] - 'a'] == 0) cnt--;

            if (j - i + 1 == k) {
                if (cnt == 0) ans++;

                if (freq[txt[i] - 'a']++ == 0) cnt++;
                i++;
            }
            j++;
        }

        return ans;
    }
};