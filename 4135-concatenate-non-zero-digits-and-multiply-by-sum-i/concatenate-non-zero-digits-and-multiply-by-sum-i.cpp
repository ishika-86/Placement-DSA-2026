class Solution {
public:
    long long sumAndMultiply(int n) {
        long long x = 0, sum = 0, p = 1;
        for (; n; n /= 10) 
            if (int d = n % 10) sum += d, x += d * p, p *= 10;
        return x * sum;
    }
};