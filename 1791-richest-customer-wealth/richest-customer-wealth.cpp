class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int ans=0;
        for(auto& i: accounts){
            int sum=0;
            for(int money: i)
                sum+=money;
            ans= max(ans, sum);
        }
        return ans;
    }
};