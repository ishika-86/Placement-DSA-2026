class Solution {
public:
    int majorityElement(vector<int>& nums) {

        //Moore's Voting Algorithm
        int n=nums.size();
        unordered_map <int,int> mp;
        for (int i: nums){
            mp[i]++;
            if (mp[i]>n/2) return i;

        }
        return -1;
    }
};