class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        //sort
        unordered_set <int> st(nums.begin(),nums.end());
        int ans=0;
        for(int x: st){
            if(!st.count(x-1)){//means its the starting elem
                int len=1;
                while(st.count(x+len)) len++; 
                ans=max(ans,len);
            }
        }
        return ans;
    }
};