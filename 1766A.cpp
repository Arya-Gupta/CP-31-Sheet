// https://codeforces.com/problemset/problem/1766/A

#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, copy, sz = 0, first_digit;
        cin >> n;
        copy = n;
        while(copy){
            sz++;
            copy /= 10;
        }
        first_digit = n / pow(10, sz - 1);
        cout << 9 * (sz - 1) + first_digit << endl;
    }
    return 0; 
}