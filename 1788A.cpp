// https://codeforces.com/problemset/problem/1788/A

#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, count = 0, target, k;
        cin >> n;
        vector<int> A(n);
        
        for(int i = 0; i < n; i++){
            cin >> A[i];
            if(A[i] == 2) count++;
        }
        
        if(count == 0){
            k = 1;
        }
        else if(count % 2 != 0){
            k = -1;
        }
        else{
            target = count / 2;
            count = 0;
            for(int i = 0; i < n; i++){
                if(A[i] == 2) count++;
                if(count == target){
                    k = i + 1;
                    break;
                }
            }
        }
        cout << k << endl;
    }
    return 0; 
}