// https://codeforces.com/problemset/problem/1859/A

#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, itr = 0;
        cin >> n;
        vector<int> A(n);
        for(int i = 0; i < n; i++) cin >> A[i];
        sort(A.begin(), A.end());
        if(A[0] == A[n - 1]) cout << "-1" << endl;
        else{
            while(A[itr] == A[0]) itr++;
            cout << itr << " " << n - itr << endl;
            for(int i = 0; i < itr; i++) cout << A[i] << " ";
            cout << endl;
            for(int i = itr; i < n; i++) cout << A[i] << " ";
        }
    }
    return 0; 
}