class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int totalgas =0, totalcost = 0, str = 0, curr=0, n = gas.size();
        for (int i=0; i<n; i++){
            totalgas += gas[i]; 
            totalcost += cost[i];
            curr += gas[i]-cost[i];

            if(curr<0){
                str = i+1;
                curr = 0;
            }

        }
        return (totalcost>totalgas)? -1:str;
    }
};