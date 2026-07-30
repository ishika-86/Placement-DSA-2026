class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        map<int,int> mp;
        int n = nums.size();
        vector<int> ans = nums;
        sort(ans.begin(),ans.end());
        for (int i = n-1;~i;i--) mp[ans[i]]=i;
        for(int i=0; i<n; i++) nums[i] =mp[nums[i]];
        return nums;
    }
};