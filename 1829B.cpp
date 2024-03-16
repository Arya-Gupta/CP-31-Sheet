// https://codeforces.com/problemset/problem/1829/B

#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, num, count = 0, max_len = 0;
        cin >> n;
        for(int i = 0; i < n; i++){
            cin >> num;
            if(num == 0) count++;
            else count = 0;
            max_len = max(max_len, count);
        }
        cout << max_len << endl;
    }
    return 0; 
}