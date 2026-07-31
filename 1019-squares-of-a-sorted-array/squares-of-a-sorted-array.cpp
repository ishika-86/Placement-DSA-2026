class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> ans(nums.size(),0);
        int l=0, r=nums.size()-1;

        for(int i=nums.size()-1; ~i; i--){
            if( abs(nums[l] ) < abs(nums[r]) ){
                ans[i]=nums[r]*nums[r]; r--;
            }
            else {
                ans[i]=nums[l]*nums[l]; l++;            
            }
        }
        return ans;
    }
};