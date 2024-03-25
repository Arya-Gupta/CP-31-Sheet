// https://codeforces.com/problemset/problem/1791/C

#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, lo, hi;
        string s;
        cin >> n >> s;
        lo = 0, hi = n - 1;
        while(lo < hi){
            if(s[lo] == '0' && s[hi] == '1' || s[lo] == '1' && s[hi] == '0'){
                n -= 2;
                lo++; hi--;
            }
            else break;
        }
        cout << n << endl;
    }
    return 0; 
}
