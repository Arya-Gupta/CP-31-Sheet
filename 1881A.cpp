// https://codeforces.com/problemset/problem/1881/A

#include <bits/stdc++.h>
using namespace std;

int checkSubstr(string x, string s){
    // check if s is already a substring of x
    if(x.find(s) != string::npos) return 0;
    
    // n.m <= 25, so if m = 25 then n = 1, so there should be a maximum of 5 operations
    for(int i = 0; i < 5; i++){
        x += x;
        if(x.find(s) != string::npos) return i + 1;
    }
    return -1;
}
 
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, m;
        string x, s;
        cin >> n >> m >> x >> s;
        cout << checkSubstr(x, s) << endl;
    }
    return 0; 
}