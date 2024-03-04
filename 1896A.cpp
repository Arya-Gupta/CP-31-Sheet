// https://codeforces.com/problemset/problem/1896/A

#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> A(n);
        for(int i = 0; i < n; i++){
            cin >> A[i];
        }
        if(A[0] == 1) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0; 
}