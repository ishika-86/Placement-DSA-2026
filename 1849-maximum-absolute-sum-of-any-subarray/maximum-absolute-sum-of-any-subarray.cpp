class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int cmax=0, cmin=0, mini = INT_MAX, maxi=INT_MIN;
        for(int i: nums){
            cmax = max(i, cmax+i);
            maxi = max(cmax, maxi);
            cmin = min(i, cmin+i);
            mini = min(cmin, mini);
        }
        return max(maxi, -mini);
    }
};