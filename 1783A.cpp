// https://codeforces.com/problemset/problem/1783/A

#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> A(n);
        set<int> st;
        for(int i = 0; i < n; i++){
            cin >> A[i];
            st.insert(A[i]);
        }
        if(st.size() == 1){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
            sort(A.begin(), A.end());
            int lo = 0, hi = n - 1;
            while(lo < hi){
                cout << A[lo++] << " " << A[hi--] << " ";
            }
            if(lo == hi) cout << A[lo];
            cout << endl;
        }
    }
    return 0; 
}