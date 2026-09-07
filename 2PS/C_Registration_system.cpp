#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    map<string, int> m;
    for (int i = 0; i < t; i++)
    {
        string s;
        cin >> s;
        if (m[s] == 0)
        {
            m[s] = 1;
            cout << "OK" << endl;
        }
        else
        {
            cout << s << m[s] << endl;
            m[s]++;
        }
    }
    return 0;
}