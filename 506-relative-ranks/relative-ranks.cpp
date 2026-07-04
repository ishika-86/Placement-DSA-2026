class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int n = score.size();
        vector <int> sorted = score;
        sort(sorted.begin(),sorted.end(),greater<int>());

        unordered_map <int,string> Rank;

        for (int i = 0; i < sorted.size(); ++i) {
            if (i == 0) Rank[sorted[i]] = "Gold Medal";
            else if (i == 1) Rank[sorted[i]] = "Silver Medal";
            else if (i == 2) Rank[sorted[i]] = "Bronze Medal";
            else Rank[sorted[i]] = to_string(i + 1);
        }
        vector <string> ans; 
        for (int s: score){
            ans.push_back(Rank[s]);
        } 
        return ans;
        
    }
};