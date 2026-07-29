class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string w, ans;
        vector <string> words;

        while(ss>>w) words.push_back(w);
        for(int i=words.size()-1;~i;i--){
            ans+=words[i];
            if(i) ans+= " ";
        }
        return ans;
    }
};