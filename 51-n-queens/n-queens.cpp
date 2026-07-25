class Solution {
public:
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans; 
        vector<string> board(n, string(n,'.'));
        unordered_set<int> cols, d1, d2;

        function <void(int)> dfs = [&](int i){
            if (i==n){
                ans.push_back(board); return;
            }
            for(int c=0;c<n;c++){
                if(cols.count(c) || d1.count(i-c)||d2.count(i+c)) continue;
                board[i][c] = 'Q';
                cols.insert(c); d1.insert(i-c); d2.insert(i+c);
                dfs(i+1);
                board[i][c] = '.';
                cols.erase(c); d1.erase(i-c); d2.erase(i+c);
            }
        };
        dfs(0); return ans;

    }
};