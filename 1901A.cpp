// https://codeforces.com/problemset/problem/1901/A

#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, x, num, gas, maxGas = 0;;
        cin >> n >> x;
        vector<int> g(n);
        for(int i = 0; i < n; i++){
            cin >> num;
            g[i] = num;;
        }
        
        for(int i = 0; i <= n; i++){
            if(i == 0) gas = g[i];
            else if(i == n) gas = 2 * (x - g[n - 1]);
            else gas = g[i] - g[i - 1];
            maxGas = max(gas, maxGas);
        }
        cout << maxGas << endl;
    }
    return 0; 
}