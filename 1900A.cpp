#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int T;
    cin >> T;
    for(int i = 1; i <= T; i++)
    {
        int n, maxEmpty = 0, count = 0, total = 0;
        string s;
        cin >> n;
        cin >> s;
        for(int j = 0; j < n; j++)
        {
            char ch = s[j];
            if(ch == '.')
            {
                count++;
                total++;
            }
            else count = 0;
            maxEmpty = max(maxEmpty, count);
        }
        if(maxEmpty >= 3) cout << 2 <<endl;
        else cout << total <<endl;
    }
}