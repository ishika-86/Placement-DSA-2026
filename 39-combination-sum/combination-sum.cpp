class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        ranges::sort(candidates);
        vector<vector<int>> ans;
        vector<int> temp;
        function <void(int, int)>dfs = [&](int i, int s) {
            if(s==0){
                ans.emplace_back(temp); return ;
            }
            if(s<candidates[i]) return;

            for(int j=i; j < candidates.size(); j++){
                temp.push_back(candidates[j]);
                dfs(j, s - candidates[j]);
                temp.pop_back();
            }
        };
        dfs(0,target);
        return ans;
    }
};