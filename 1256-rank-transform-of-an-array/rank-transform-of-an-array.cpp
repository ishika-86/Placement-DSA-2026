class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        priority_queue<int,vector<int>,greater<int>> q;

        for(auto &it:arr){
            q.push(it);

        }

        unordered_map<int,int> mp;
        int rank=1;

        while(!q.empty()){
            int x=q.top();
            q.pop();
            if(mp.find(x)==mp.end()){
                mp[x]=rank++;
            }
        }

        for(int i=0;i<arr.size();i++){
            arr[i]=mp[arr[i]];
        }

        return arr;
    }
};