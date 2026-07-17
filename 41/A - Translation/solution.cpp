#include <bits/stdc++.h>
using namespace std;
int main() {
 
    string s1, s2;
    cin >> s1 >> s2;
    
    string reverse_str = s1;
    reverse(reverse_str.begin(), reverse_str.end());
 
    if (reverse_str == s2) cout << "YES";
    else cout << "NO";
 
    return 0;
}