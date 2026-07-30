class Solution {
public:
    int thirdMax(vector<int>& nums) {
        unordered_set<int>s(nums.begin(), nums.end());
        priority_queue<int> pq;
        for(auto i: s) pq.push(i);
        if(pq.size()<3) return pq.top();
        int t=2;
        pq.pop(); pq.pop();
        return pq.top();
    }
};