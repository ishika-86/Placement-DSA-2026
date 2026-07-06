class Solution {
  public:
    vector<int> bfs(vector<vector<int>> &adj) {
        // code here
        vector <bool> visit(adj.size(), false);
        vector <int> ans; queue <int> q;
        int src=0;
        visit[src]=true;
        q.push(src);
        
        while(!q.empty()) {
            int ngh = q.front();
            q.pop(); ans.push_back(ngh);
            
            for(int x: adj[ngh]){
                if (!visit[x]) {visit[x]=true; q.push(x);}
            }
        }
        return ans;
    }
};