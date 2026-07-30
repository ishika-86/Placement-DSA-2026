class Solution {
public:
    int thirdMax(vector<int>& nums) {
        unordered_set<int>st(nums.begin(), nums.end());
        vector<int>vec(st.begin(),st.end());
        ranges::sort(vec,greater<int>());
        return vec.size()>=3? vec[2]: vec[0];
    }
};