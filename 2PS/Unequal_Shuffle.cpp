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
        string a, b;
        cin >> a >> b;
        int fca = 0;
        int fcb = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 'a')
            {
                fca++;
            }
            else
            {
                fcb++;
            }
            if (b[i] == 'a')
            {
                fca++;
            }
            else
            {
                fcb++;
            }
        }
        if (fca == fcb)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}