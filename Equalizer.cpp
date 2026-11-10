
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int ans = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] == a[i + 1])
                ans++;
        }
        int best = ans;
        for (int i = 0; i < n; i++)
        {
            for (int j = i; j < n; j++)
            {
                int score = 0;
                for (int k = 0; k < n - 1; k++)
                {
                    int x = a[k];
                    int y = a[k + 1];
                    if (k >= i && k <= j)
                        x++;

                    if (k + 1 >= i && k + 1 <= j)
                        y++;

                    if (x == y)
                        score++;
                }

                best = max(best, score);
            }
        }

        cout << best << '\n';
    }

    return 0;
}
