// https://codeforces.com/problemset/problem/1877/A

#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, freqSum = 0;
        cin >> n;
        for(int i = 0; i < n - 1; i++){
            int freq;
            cin >> freq;
            freqSum += freq;
        }
        cout << freqSum * (-1) << endl;
    }
    return 0; 
}