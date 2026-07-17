#include <bits/stdc++.h>
using namespace std;
int main() {
 
    int n, count=0; 
    cin >> n;
 
    for(int i = 0; i < n;++i) {
        int pi, qi;
        cin >> pi >> qi;
 
        if (qi - pi >= 2) count++;
    }
    cout << count;
 
    return 0;
}