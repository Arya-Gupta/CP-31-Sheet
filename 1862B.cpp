// https://codeforces.com/contest/1862/problem/B

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
 
 
int main(){
    ll t;
    cin >> t;

    while(t--){
        ll n;
        cin >> n;

        vector<ll> A(n);
        for(ll i = 0; i < n; i++) cin >> A[i];
        
        vector<ll> B;
        B.push_back(A[0]);

        if(n > 1){
            for(ll i = 1; i < n; i++){
                B.push_back(A[i]);
                if(A[i] < A[i - 1]) B.push_back(A[i]);
            }
        }
        cout << B.size() << endl;
        for(auto i : B) cout << i << " ";
        cout << endl;
    }
    return 0;
}