// https://codeforces.com/problemset/problem/1806/A

#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b, c, d, x, y, min_moves;
        cin >> a >> b >> c >> d;
        if(d < b || a + d - b < c) cout << -1 << endl;
        else cout << (d - b) + (a + d - b - c) << endl;
    }
    return 0; 
}