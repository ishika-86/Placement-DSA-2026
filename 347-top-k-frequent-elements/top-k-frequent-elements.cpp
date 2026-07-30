class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        for(int x: nums) mp[x]++;
        priority_queue <pair<int,int>> pq; //max-heap
        for(auto &[num,f]:mp)pq.push({f,num});
        vector <int> ans;
        while(k--){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};