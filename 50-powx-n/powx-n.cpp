class Solution {
public:
    using ll = long long;
    double solve(double x, ll n){
        if(n==0) return 1.0;
        double half = solve(x,n/2);
        if(n%2==0) return half*half;
        else return x*half*half;
    }
    double myPow(double x, int n) {
        ll N=n;
        if(N<0) return 1.0/solve(x,-N);

        return solve(x,N);
    }
};