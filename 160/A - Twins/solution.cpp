#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    int a[n];
    int total = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        total += a[i];
    }
    sort(a, a+n, greater<int>());
    int s = 0, count = 0;
    for (int i = 0; i < n; i++) {
        s += a[i];
        count++;
        if (s > total / 2) {
            break;
        }
    }
    cout << count << endl;
 
}