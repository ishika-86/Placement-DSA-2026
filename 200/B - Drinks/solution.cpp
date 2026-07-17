#include <bits/stdc++.h>
using namespace std;
int main() {
 
    int n, sum=0; 
    cin >> n;
    vector <int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
        sum += v[i];
    }
 
    double ans;
    ans = (double)sum / n;
    cout << fixed << setprecision(12) << ans << endl;
 
    return 0;
}