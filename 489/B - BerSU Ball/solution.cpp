#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
 
int main(){
 
    int b; cin >> b;
    vector <int> boys(b);
    for (int i = 0; i < boys.size(); i++) cin >> boys[i];
 
    int g; cin >> g;
    vector<int> girls(g);
    for (int i = 0; i < girls.size(); i++) cin >> girls[i];
 
    sort(boys.begin(), boys.end());
    sort(girls.begin(), girls.end());
    int count = 0;
 
    int i=0, j=0;
    while(i<b && j<g){
        if (abs(boys[i] - girls[j]) <= 1) {
            count++; i++; j++; continue;
        } 
        boys[i] < girls[j] ? i++ : j++;
    }
 
    cout << count << endl;
    return 0;
}