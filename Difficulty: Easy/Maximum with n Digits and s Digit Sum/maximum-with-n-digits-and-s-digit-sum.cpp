class Solution {
  public:
    string findLargest(int n, int s) {
        // code here
        if (s == 0) return n == 1 ? "0" : "-1";
        if (s > 9 * n) return "-1";

        string ans;
        while (n--) {
            int d = min(9, s);
            ans += char(d + '0');
            s -= d;
        }
        return ans;
    }
};