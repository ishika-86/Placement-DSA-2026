class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans = 0, n = prices.size();
        vector <int> prefMin(n);
        prefMin[0] = prices[0];
        for (int i=1; i<n; i++){
            prefMin[i] = min(prefMin[i-1], prices[i]);
        }
        for (int i=0; i<n; i++){
            ans = max(ans, prices[i]-prefMin[i]);
        }
        return ans;
    }
};