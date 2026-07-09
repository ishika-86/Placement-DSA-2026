class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        vector <int> temp;
        for (int num: nums){
            if (num) temp.push_back(num);
        }
        /* while (temp.size()<nums.size()) temp.push_back(0); */
        temp.resize(nums.size(),0);
        nums = temp;
        
    }
};