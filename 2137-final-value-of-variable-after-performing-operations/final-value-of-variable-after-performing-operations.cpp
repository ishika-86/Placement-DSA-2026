class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int x=0;
        for(string o: operations) x+= (44-o[1]);
        return x;
    }
};