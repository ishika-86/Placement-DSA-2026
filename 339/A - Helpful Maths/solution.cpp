#include <bits/stdc++.h>
using namespace std;
int main() {
 
    string s; cin>>s;
    vector<int> nums;
 
    for (char c : s) {
        if(c!= '+'){
            nums.push_back(c - '0');
        }
    }
 
    sort(nums.begin(), nums.end());
 
 
    ostringstream oss;
    for (int i = 0; i < nums.size(); i++){
        if (i>0) oss << "+";
        oss << nums[i];
    }
    cout << oss.str() << endl;
    
 
    return 0;
}