using ll =long long;
class Solution {
public:

    int solve(int n, ll a, ll b){
        if(n==0) return a;
        return solve(n-1, b, a+b);
    }
    int climbStairs(int n) {
        return solve(n,1,1);
    }
};