class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for (int i=0; i < n; i++){
            nums1[m+i] = nums2[i];
        }
        /* for (int j = 0, i = m; j < n; j++) {
            nums1[i] = nums2[j];
            i++;
        } */
        sort(nums1.begin(), nums1.end());
    }
};