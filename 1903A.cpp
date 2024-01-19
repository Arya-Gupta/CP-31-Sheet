// https://codeforces.com/problemset/problem/1903/A

#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        vector<int> A;
        for(int i = 0; i < n; i++){
            int num;
            cin >> num;
            A.push_back(num);
        }
        if(is_sorted(A.begin(), A.end())) cout << "YES" << endl;
        else{
            if(A.size() == 1) cout << "NO" << endl;
            else if(k == 1) cout << "NO" << endl;
            else cout << "YES" << endl;
        }
    }
    return 0; 
}