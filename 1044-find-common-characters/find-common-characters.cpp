class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector <string> ans;
        for(char c = 'a'; c<='z';c++){
            int minCnt = INT_MAX;
            for(const string& word: words){
                int cnt = 0;
                for(char ch: word) //Scan Current Word
                    if(ch==c) cnt++;
            
            minCnt = min(minCnt,cnt);
            if (minCnt==0) break;
            }
            for(int i= 0; i < minCnt; i++){
                ans.push_back(string(1,c));
            }
        }
        return ans;
    }
};