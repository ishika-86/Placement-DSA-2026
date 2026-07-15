class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int curr=0, maxSum =INT_MIN;
        for (int i: nums){
            curr += i;
            maxSum = max(curr, maxSum);
            if (curr<0) curr = 0;
        }
        
        return maxSum;
    }
};