
class Solution {
    using ll =long long;
public:
    int climbStairs(int n) {
        if(n<=2) return n;
        ll a = 1, b = 2;

        for(int i=3; i<=n; i++){
            ll ans=a+b;
            a=b; b=ans;
        }
        return b;

    }
};