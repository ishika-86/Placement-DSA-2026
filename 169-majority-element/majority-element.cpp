class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int c = 0;
        int cand=0;
        for (int i=0; i<nums.size(); i++){
            if (c==0) cand=nums[i];

            if (cand==nums[i]) c++;
            else c--;
        }
        return cand;
    }
};