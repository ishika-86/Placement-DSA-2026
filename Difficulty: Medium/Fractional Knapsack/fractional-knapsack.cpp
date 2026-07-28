class Solution {
  public:
    double fractionalKnapsack(vector<int>& val, vector<int>& wt, int capacity) {
        // code here
        vector<pair<double, pair<int,int>>> items;
        for(int i=0; i<val.size(); i++){
            double ratio = (double) val[i]/wt[i];
            items.push_back({ratio, {val[i],wt[i]}});
        }
        
        sort(items.begin(), items.end(),
             [](auto &a, auto &b) {
                 return a.first > b.first;
        });
        
        double ans = 0.0;
        for(auto &it: items){
            int v = it.second.first;
            int w = it.second.second;
            
            if(capacity>=w){
                capacity-=w; ans+=v;
            }else {
                ans += (double)capacity/w*v;break;
            }
        }
        return ans;
    }
};
