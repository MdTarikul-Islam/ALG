#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        int cnt = 0;
        int trc = x;
        bool flg = false;
        if (x >= 2)
        {
            for (int i = 2; i <= x; i += 2)
            {
                cnt += 30;
                trc -= 2;
            }
        }
        else
        {
            cnt += 20;
            flg = true;
        }

        if (trc >= 1 && flg == false)
        {
            cnt += 20;
        }

        cout << cnt << endl;
    }
    return 0;
}