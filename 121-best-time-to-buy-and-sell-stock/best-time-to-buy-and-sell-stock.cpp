class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProf = 0, n = prices.size(), mn = INT_MAX;
        for (int i=0; i<n; i++){
            if(prices[i]<mn) mn = prices[i];
            maxProf = max(maxProf, prices[i]-mn);
        }
        return maxProf;
    }
};