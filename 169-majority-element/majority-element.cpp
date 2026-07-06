class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        /* sort(nums.begin(),nums.end());
        return nums[nums.size()/2]; */

        /* unordered_map <int,int> mp;
        for (int i: nums) mp[i]++;
        for (auto i: mp){
            if(i.second>nums.size()/2) return i.first;
        }
        return -1; */

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