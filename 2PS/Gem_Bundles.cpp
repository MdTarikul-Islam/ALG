#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int x = min({a, b, c});
        cout << x * 10 + ((a - x) + (b - x) + (c - x)) * 3 << endl;
    }
    return 0;
}