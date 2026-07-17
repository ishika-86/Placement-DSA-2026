#include <bits/stdc++.h>
using namespace std;
 
bool hasDistinctDigits(int year){
    string yearStr = to_string(year);
    set <char> digits;
    for(char digit : yearStr){
        if(digits.find(digit)!= digits.end()){
            return false;
        }
        digits.insert(digit);
    }
    return true;
}
int main() {
 
    int yr; cin >> yr;
    int nextYear = yr + 1;
    while(!hasDistinctDigits(nextYear)){
        nextYear++;
    }
    cout << nextYear << endl;
 
    return 0;
}