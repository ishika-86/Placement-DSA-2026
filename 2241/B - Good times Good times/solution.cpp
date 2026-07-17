#include <bits/stdc++.h>
using namespace std;
 
int main() {
    
    int t; cin >> t;
 
    while (t--) {
        long long x; cin >> x;
        int y=1;
        long long temp = x;
        while(temp>0) {
            y *= 10;
            temp /= 10;
        }
        cout << y+1 << "
";
    }
    return 0;
}