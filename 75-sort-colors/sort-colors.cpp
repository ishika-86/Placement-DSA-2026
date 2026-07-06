class Solution {
public:
    void sortColors(vector<int>& nums) {
        int ct[3] = {0,0,0};
        for (int color: nums) ct[color]++;

        int r=ct[0], w=ct[1], b=ct[2];

        for(int i=0;i < r;i++) nums[i] =0;
        for(int i=r;i < r+w;i++) nums[i] =1;
        for(int i=r+w;i < nums.size();i++) nums[i] =2;
    }
};