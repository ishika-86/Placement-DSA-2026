// Sieve of Erato67henes
#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t; cin>>t;
    while(t--){
        int x; cin>>x;
        vector<int> n1(x);
        for (int i=0; i<x; i++){
            cin>>n1[i];
        }
        bool found = false;
        for (int i=0; i<x; i++){
            if (n1[i] == 67){
                found = true;
                break;
            }
        }
        found ? cout<<"YES"<<endl : cout<<"NO"<<endl;
    }
    return 0;
}