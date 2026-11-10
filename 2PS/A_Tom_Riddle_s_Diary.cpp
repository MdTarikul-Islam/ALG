#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    map<string, int> mp;
    while (t--)
    {
        string s;
        cin >> s;
        if (mp.count(s) > 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            mp[s]++;
            cout << "NO" << endl;
        }
    }
    return 0;
}