// shifting stacks
#include <iostream>
#include <vector>
using namespace std;
 
int main(){
    int t;
    cin >> t;
 
    while(t--){
        int n; cin >> n;
        long long sum = 0, need = 0;
        bool canShift = true;
 
        for (int i = 0; i < n; i++){
            long long x; cin >> x;
            sum += x;
            need += i;
 
            if (sum < need){
                canShift = false;
            }
 
        }
        if (canShift){
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
        }
        
    }
    return 0;
}
 