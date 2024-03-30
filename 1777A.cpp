// https://codeforces.com/problemset/problem/1777/A

#include <bits/stdc++.h>
using namespace std;

bool diffParity(int a, int b){
    if(a % 2 == 0 && b % 2 != 0 || a % 2 != 0 && b % 2 == 0) return true;
    return false;
}
 
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> A(n);
        for(int i = 0; i < n; i++){
            cin >> A[i];
        }
        if(n == 1) cout << 0 << endl;
        else{
            stack<int> st;
            st.push(A[0]);
            for(int i = 1; i < n; i++){
                if(diffParity(st.top(), A[i])){
                    st.push(A[i]);
                }
                else{
                    int prod = st.top() * A[i];
                    st.pop();
                    st.push(prod);
                }
            }
            cout << n - st.size() << endl;
        }
    }
    return 0; 
}