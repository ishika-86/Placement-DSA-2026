#include <bits/stdc++.h>
using namespace std;
int main() {
 
    string s; cin >> s;
    int upperCount = 0;
    int lowerCount = 0;
 
    for(char c : s) {
        if(isupper(c)) upperCount++;
        else if(islower(c)) lowerCount++;
    }
 
    if(upperCount > lowerCount){
        transform(s.begin(), s.end(), s.begin(), ::toupper);
    }
    else{
        transform(s.begin(), s.end(), s.begin(), ::tolower);
    }
 
    cout << s << endl;
 
    return 0;
}