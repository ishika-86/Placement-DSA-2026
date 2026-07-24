class Solution {
public:
    double myPow(double x, int n) {
        long long N=n;
        bool neg = false;
        if (N<0){
            neg=true;
            N=-N;
        }
        double ans = 1;
        while(N>0){
            if (N&1) ans *= x;
            x*=x; N>>=1;
        }
        return neg? 1.0/ans : ans;
    }
};