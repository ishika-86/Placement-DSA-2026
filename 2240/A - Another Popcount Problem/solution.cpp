#include <iostream>
#include <algorithm>
using namespace std;
 
int main(){
    int t; cin >> t;
    while (t--){
        long long n, k; cin >> n >> k;
 
        long long ans =0, cost =1;
        while (cost<=n){
            long long take = min(k, n/cost);
            ans += take;
            n -= take * cost;
            cost *= 2;
        }
        cout << ans << endl;
    }
    return 0;
    
}