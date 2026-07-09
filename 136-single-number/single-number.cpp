class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        // Check elements in pairs
        for(int i=0;i<nums.size()-1; i+=2){
            if(nums[i]!=nums[i+1]) return nums[i];
        }
        // If every previous pair matched,
        // the last element is the answer
        return nums.back();
    }
};