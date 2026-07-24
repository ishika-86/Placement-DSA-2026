class Solution {
public:

    int solve(int n, int a, int b){
        if (n==0) return a;
        return solve(n-1,b,a+b);
    }
    
    int fib(int n) {
        return solve(n, 0, 1);
    }
};