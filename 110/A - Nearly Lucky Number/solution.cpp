#include <bits/stdc++.h>
using namespace std;
 
bool isLucky(long long num){
    string s = to_string(num);
    for (char c : s){
        if (c != '4' && c!= '7') return false;
    }
    return true;
}
int main() {
 
   long long n; cin >> n;
   string s = to_string(n);
   int count = 0;
 
   for (int i = 0; i < s.size(); i++) {
      if (s[i] == '4' || s[i] == '7') count++;
   }
 
   if(isLucky(count)){
     cout << "YES";
   }
   else{
     cout << "NO";
   }
 
    return 0;
}