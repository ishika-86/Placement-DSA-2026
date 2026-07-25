class Solution {
public:
    vector<vector<string>> partition(string s) {
    
    vector<vector<string>> ans;
    vector<string> temp;
    int n =s.size();

    auto isPalin = [&] (int l, int r){
        while(l<r){
            if (s[l]!=s[r]) return false;
            l++; r--;
        }
        return true;
    };

    function <void(int)> dfs = [&] (int i){
        if (i==n) {ans.push_back(temp); return;}
        for(int j=i; j<n; j++){
            if (isPalin (i,j) ) {
                temp.push_back(s.substr(i,j-i+1));
                dfs(j+1);
                temp.pop_back();
            }
        }
    };

    dfs(0); return ans;
    }
};