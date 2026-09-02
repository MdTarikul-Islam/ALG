#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;

        int ans = k;

        n--;
        k--;
        while (k > 0)
        {
            k -= 2 * n;

            if (k < 0)
            {
                break;
            }
            ans += k;

            if (k - 1 < 0)
            {
                break;
            }
            ans += k - 1;

            k -= 2;
        }
        cout << ans << endl;
    }
    return 0;
}