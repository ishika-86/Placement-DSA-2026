class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string p = strs[0]; 
        for(int i = 1; i<strs.size(); i++){
            while(strs[i].find(p)) p.pop_back();
            if(p.empty()) return "";
        }
        return p;
    }
};