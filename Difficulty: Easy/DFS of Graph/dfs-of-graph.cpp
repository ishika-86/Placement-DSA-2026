class Solution {
  public:
    vector<int> dfs(vector<vector<int>>& adj) {
        // Code here
        vector<bool>vis(adj.size());
        vector<int>ans;
        dfs1(0,adj,vis,ans);
        return ans;
    }
    void dfs1(int node,vector<vector<int>>&adj,vector<bool>&vis,vector<int>&ans){
        vis[node]=true;
        ans.push_back(node);
        for(int nei:adj[node]){
            if(!vis[nei]){
                dfs1(nei,adj,vis,ans);
            }
        }
        return;
    }
};