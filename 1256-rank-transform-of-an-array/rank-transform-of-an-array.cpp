class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector <int> temp=arr;
        sort(temp.begin(), temp.end());
        unordered_map <int, int> mp;
        for (int i=0, r=1; i<temp.size(); i++){
            if(!mp.count(temp[i])) mp[temp[i]] = r++;
        }
        for (auto &x:arr) x = mp[x];
        return arr;
    }
};