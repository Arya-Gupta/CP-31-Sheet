// https://codeforces.com/problemset/problem/1814/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    ll t;
    cin >> t;
    while(t--){
        ll n, k;
        cin >> n >> k;
        if(k % 2 == 0 && n % 2 != 0) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
    return 0; 
}