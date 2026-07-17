#include <bits/stdc++.h>
using namespace std;
int main() {
 
    int n; cin>>n;
    string s; cin >> s;
    int CountA=0, CountD=0;
 
    for(int i=0; i<s.length(); i++) {
        if(s[i] == 'A') CountA++;
        else if(s[i] == 'D') CountD++;
    }
 
    if(CountA > CountD) cout << "Anton";
    else if(CountD > CountA) cout << "Danik";
    else cout << "Friendship";
 
    return 0;
}