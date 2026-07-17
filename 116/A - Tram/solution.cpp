#include <bits/stdc++.h>
using namespace std;
int main() {
 
    int n; cin >> n;
    vector <pair <int, int> > stops(n);
    for (int i = 0; i < n; i++) {
        cin >> stops[i].first >> stops[i].second;
    }
 
    int currentPassengers = 0, maxCapacity = 0;
    for (int i = 0; i < n; i++) {
        currentPassengers -= stops[i].first;
        currentPassengers += stops[i].second;
        maxCapacity = max(maxCapacity, currentPassengers);
    }
 
    cout << maxCapacity << endl;
 
    return 0;
}