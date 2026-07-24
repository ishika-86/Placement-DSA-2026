class Solution {
public:
    int climbStairs(int n) {
        long long a=1, b=1;
        while(n--){
            b+=exchange(a,b);
        }
        return a;
    }
};