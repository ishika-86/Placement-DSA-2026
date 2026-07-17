#include <bits/stdc++.h>
using namespace std;
int main() {
 
    int n;
    cin >> n;
    vector<int> magnets(n);
 
    for (int i = 0; i < n; i++){
        cin >> magnets[i];
    }
    int grp = 0;
    for (int i = 0; i < n; i++){
        if (magnets[i] != magnets[i+1]) grp++;
    }
    
    cout << grp ;
 
    return 0;
}