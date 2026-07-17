class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int tg = accumulate(gas.begin(), gas.end(),0);
        int tc = accumulate(cost.begin(), cost.end(),0);
        if (tc>tg) return -1;
        int str = 0, curr = gas[0]-cost[0];
        for (int i=1; i<gas.size(); i++){
            if (curr<0){
                str = i;
                curr = gas[i]-cost[i];
            }
            else curr += gas[i] - cost[i];
        }
        return str;
        
    }
};