class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        int n = nums.size();
        vector <int> ans(n);
        int x = 0;
        for (int i=0; i< n; i++){
            x = max(x, nums[i]);
            ans[i]=gcd(nums[i], x);
        }
        sort(ans.begin(), ans.end());
        long long total = 0;
        int l=0, r=n-1;
        while(l<r){
            total += gcd(ans[l],ans[r]);
            l++; r--;
        }
        return total;
    }
};