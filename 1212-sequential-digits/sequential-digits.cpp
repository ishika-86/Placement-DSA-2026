class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        string s = "123456789";
        vector <int> ans;
        int lowlen = to_string(low).size();
        int highlen = to_string(high).size();

        for(int len = lowlen; len<=highlen; len++){
            for(int i=0; i+len<=9; i++){
                int n = stoi(s.substr(i,len));

                if (n>=low && n<= high) ans.push_back(n);
            }
        }
        return ans;
    }
};