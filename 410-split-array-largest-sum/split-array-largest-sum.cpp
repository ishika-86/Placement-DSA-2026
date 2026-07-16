class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        int l = *max_element(nums.begin(), nums.end());
        long long r = accumulate(nums.begin(), nums.end(), 0LL);

        while (l < r) {
            long long mid = l + (r - l) / 2, sum = 0;
            int cnt = 1;

            for (int x : nums)
                if (sum + x > mid)
                    cnt++, sum = x;
                else
                    sum += x;

            if (cnt <= k) r = mid;
            else l = mid + 1;
        }
        return l;
    }
};