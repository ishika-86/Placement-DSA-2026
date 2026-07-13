class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans = 0, mini = prices[0];
        for (int p: prices){
            mini = min(mini, p); ans = max(ans, p-mini);
        }
        
        return ans;
    }
};