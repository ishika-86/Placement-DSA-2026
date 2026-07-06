class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
        int n = nums.size();
        if(n==0) return false;
        int mid = nums[n/2];
        unordered_map <int,int> freq;
        for (int num: nums) freq[num]++;

        return freq[mid]==1;
    }
};