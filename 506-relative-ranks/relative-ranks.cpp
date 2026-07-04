class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int n = score.size();
        priority_queue <pair<int,int>> pq;
        for(int i=0;i<n;i++){
            pq.push({score[i],i});
        }
        vector <string> res(n);
        int rank=1;
        while (!pq.empty()){
            auto[a,b]=pq.top(); pq.pop();

            if(rank==1) res[b]="Gold Medal";
            else if(rank==2) res[b]="Silver Medal";
            else if(rank==3) res[b]="Bronze Medal";
            else res[b] = to_string(rank);

            rank++;
        }     
        return res;
        
    }
};