// https://codeforces.com/problemset/problem/1878/A

#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k, num, flag = 0;
        cin >> n >> k;
        for(int i = 0; i < n; i++){
            cin >> num;
            if(num == k) flag++;
        }
        if(flag) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0; 
}