class Solution {
public:
    using ll = long long;
    double solve(double x, ll n, double ans){
        if(n==0) return ans;
        if(n&1!=0) ans *= x;
        return solve(x*x,n/2,ans);
    }
    double myPow(double x, int n) {
        ll N=n;
        if(N<0) return 1.0/solve(x,-N,1.0);

        return solve(x,N,1.0);
    }
};