// https://codeforces.com/problemset/problem/1831/A

#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, sum;
        cin >> n;
        vector<int> A(n);
        for(int i = 0; i < n; i++) cin >> A[i];
        sum = n + 1;
        for(int i = 0; i < n; i++){
            cout << sum - A[i] << " ";
        }
        cout << endl;
    }
    return 0; 
}