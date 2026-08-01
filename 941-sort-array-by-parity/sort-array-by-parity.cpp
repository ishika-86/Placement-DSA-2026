class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int l=0, r= nums.size()-1;
        while(l<r){
            if(l<r && (nums[l]&1)==0) l++; //l is even thus correct place
            else if(l<r && (nums[r]&1)!=0) r--; //r is odd thus correct place
            else{
                swap(nums[l],nums[r]);
                l++; r--;
            }
        }
        return nums;
    }
};