#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, d;
        cin >> n >> d;
        int a[n], b[n];
        int ans1 = 0, ans2 = 0, ans3 = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            ans1 += a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
            ans2 += b[i];

            ans3 += min(a[i], b[i]);
        }
        cout << min({ans1 + d, ans2 + d, ans3 + 2 * d}) << endl;
    }

    return 0;
}