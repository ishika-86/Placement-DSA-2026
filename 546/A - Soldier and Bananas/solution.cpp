#include <bits/stdc++.h>
using namespace std;
int main() {
 
    int i, k, n, w, ans=0;
    cin >> k >> n >> w;
    // for loop --> i*k ==ans 1
    // for loop --> i*w == ans2
    // print ans 2 - ans1
 
    for (int i = 0; i <= w; i++){
        ans += i*k;
    }
    if(ans<=n) cout << 0;
    else cout << ans-n << endl;
 
    return 0;
}