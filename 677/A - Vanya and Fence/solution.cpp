#include <bits/stdc++.h>
using namespace std;
int main() {
 
    int n, h; cin >> n >> h;
 
    vector <int> heights(n);
    for (int i = 0; i < n; i++) cin >> heights[i];
 
    int totalWidth = 0;
    for (int i = 0; i < n; i++){
        if(heights[i] > h) totalWidth += 2;
        else totalWidth++;
    }
 
    cout << totalWidth << endl;    
 
    return 0;
}