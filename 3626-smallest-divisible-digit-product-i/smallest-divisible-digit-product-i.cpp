class Solution {
public:

    int prod(int x){
        int ans=1, d=0;
        for(;x;x/=10){
            d=x%10;
            ans*=d;
        }
        return ans;
    }

    int smallestNumber(int n, int t) {
        for(int i=n; i<n+10; i++)
            if(prod(i)%t==0) return i;
        return 0;
    }
};