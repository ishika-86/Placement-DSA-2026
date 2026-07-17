#include <bits/stdc++.h>
using namespace std;
int main() {
 
    int n;
    cin >> n;
    int r=0,g=0,b=0;
    char a[55];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    if(n<=50){
        for (int i = 0; i < n; i++){
            if(a[i]=='R'|| a[i]=='G'|| a[i]=='B'){
                if(a[i]=='R'){
                    if(a[i]=='R' && a[i+1]=='R'){
                        r++;
                    }
                }
                if(a[i]=='G'){
                    if(a[i]=='G' && a[i+1]=='G'){
                        g++;
                    }
                }
                if(a[i]=='B'){
                    if(a[i]=='B' && a[i+1]=='B'){
                        b++;
                    }
                }
            }
        }
    
    int sum = r + g + b;
    cout << sum << endl;
    }
    else{
        exit(0);
    }
 
    return 0;
 
}