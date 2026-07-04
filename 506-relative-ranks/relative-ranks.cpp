class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int n = score.size();
        vector <int> v(n);
        iota(v.begin(),v.end(),0);

        sort(v.begin(),v.end(),[&score](int a, int b){
            return score[a]>score[b];
        });
        vector <string> ans(n); 
        vector <string> medals = {"Gold Medal","Silver Medal","Bronze Medal"};

        for(int i=0;i<n;i++){
            if (i<3) ans[v[i]]=medals[i];
            else ans[v[i]]=to_string(i+1);
        }
        
        return ans;
        
    }
};