#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n, s;
        cin >> n >> s;
        int ans = -1;
        for (int i = 0; i <= n; i++)
        {
            for (int j = 0; j <= n - i; j++)
            {
                int sc = i * 4 - j;
                if (sc == s)
                {
                    int stp = i + j;

                    if (ans == -1)
                    {
                        ans = stp;
                    }
                }
            }
        }
        cout << ans << endl;
    }
}
