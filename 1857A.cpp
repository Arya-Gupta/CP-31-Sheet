// https://codeforces.com/problemset/problem/1857/A

#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, num, sum = 0;
        cin >> n;
        for(int i = 0; i < n; i++){
            cin >> num;
            sum += num;
        }
        if(sum % 2) cout << "No" << endl;
        else cout << "Yes" << endl;
    }
    return 0; 
}