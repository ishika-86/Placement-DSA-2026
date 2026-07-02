class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        int rep=-1,miss=-1;
        unordered_set <int> st;

        for (auto & row: grid){
            for(auto x: row){
                if (st.contains(x)){
                    rep=x;
                }
                else st.insert(x);
            }
        }

        int N =n*n;
        for(int i = 1; i<=N; i++){
            if (!st.contains(i)) {
            miss = i;
            break;
            }
        }

        return {rep,miss};
    }
};