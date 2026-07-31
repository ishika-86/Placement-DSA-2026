class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        for(int i=0; i<nums.size(); i++)
            nums[i]=nums[i]*nums[i];
        ranges::sort(nums);
        return nums;
    }
};