class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        
        int n = grid.size(); int N =n*n;
        int rep=0,miss=0;

        vector <int> frq(N+1,0);

        for (auto & row: grid){
            for(auto x: row) frq[x]++;
        }

        for(int i = 1; i<=N; i++){
            if (frq[i]==2) rep=i;
            if (frq[i]==0) miss=i;
        }

        return {rep,miss};
    }
};