// https://codeforces.com/problemset/problem/1866/A

#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int N, num, min_ele = INT_MAX;
    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> num;
        min_ele = min(min_ele, abs(num));
    }
    cout << min_ele << endl;
    
    return 0; 
}