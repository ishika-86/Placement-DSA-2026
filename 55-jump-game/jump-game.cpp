class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        for(int i = 0, jump =0; i<n; i++){
            if (i>jump) return false;
            jump = max(jump , i+nums[i]); 
        }
        return true;
    }
};