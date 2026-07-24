class Solution {
public:
    int fib(int n) {
        int a= 0, b=1;
        while(n--){
            b+=exchange(a,b);
        }
        return a;
    }
};