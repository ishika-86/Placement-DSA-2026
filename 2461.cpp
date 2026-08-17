#include <vector>
#include <unordered_map>
#include <algorithm>

class Solution {
public:
    long long maximumSubarraySum(std::vector<int>& nums, int k) {
        std::unordered_map<int, int> ans;
        int L = 0;
        long long sum = 0;
        long long maxSum = 0;

        for (int R = 0; R < nums.size(); R++) {
            sum = sum + nums[R];
            ans[nums[R]]++;

            int windowSize = R - L + 1;
            if (windowSize == k) {
                if (ans.size() == k) {
                    maxSum = std::max(maxSum, sum);
                }

                sum -= nums[L];
                ans[nums[L]]--;

                if (ans[nums[L]] == 0) {
                    ans.erase(nums[L]);
                }
                L++;
            }
        }
        return maxSum;
    }
};
