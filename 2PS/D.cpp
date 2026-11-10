#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int a[n];
        int f[101] = {0};
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            f[a[i]]++;
        }
        int c = m;
        for (int i = 1; i <= 100; i++)
        {
            if (f[i] > 0)
            {
                c--;
            }
        }
        cout << c << endl;
    }
    return 0;
}