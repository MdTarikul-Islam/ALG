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
        deque<int> dq(n);
        for (int i = 0; i < n; i++)
        {
            cin >> dq[i];
        }

        int ans = 0;
        int f = 0;
        while (f <= k)
        {
            deque<int> d = dq;
            int i = 0;
            while (i < f)
            {
                d.pop_front();
                i++;
            }
            i = 0;
            while (i < k - f)
            {
                d.pop_back();
                i++;
            }
            int sum = 0;
            for (auto value : d)
            {
                sum += value;
            }
            ans = max(ans, sum);
            f++;
        }

        cout << ans << endl;
    }
    return 0;
}