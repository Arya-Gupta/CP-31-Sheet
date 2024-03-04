// https://codeforces.com/problemset/problem/1890/A

#include <bits/stdc++.h>
using namespace std;
 
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
        unordered_map<int, int> mp;
        for(auto i : A) mp[i]++;
        if(size(mp) == 1) cout << "Yes" << endl;
        else if(size(mp) == 2){
            vector<int> elements;
            for(auto i : mp){
                elements.push_back(i.first);
            }
            if(abs(mp[elements[0]] - mp[elements[1]]) <= 1) cout << "Yes" << endl;
            else cout << "No" << endl;
        }
        else{
            cout << "No" << endl;
        }
    }
    return 0; 
}