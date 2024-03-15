// https://codeforces.com/problemset/problem/1834/A

#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t--){
        int sz, num, pos = 0, neg = 0, min_op = 0;
        cin >> sz;
        for(int i = 0; i < sz; i++){
            cin >> num;
            if(num == 1) pos++;
            else neg++;
        }
        
        // if sum of elements < 0
        while(pos < neg){
            pos++; 
            neg--;
            min_op++;
        }
        
        if(neg % 2 != 0) cout << min_op + 1 << endl; // if product of elements is -1
        else cout << min_op << endl;
    }
    return 0; 
}