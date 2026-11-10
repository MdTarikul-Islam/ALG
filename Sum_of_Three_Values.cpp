#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k;
    cin >> n >> k;
    vector<pair<int, int>> a(n);
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        a[i] = {val, i + 1};
    }
    sort(a.begin(), a.end());
    for (int i = 0; i < n - 2; i++)
    {
        int totals = k - a[i].first;
        int j = i + 1, jj = n - 1;
        while (j < jj)
        {
            int curs = a[j].first + a[jj].first;
            if (curs > totals)
            {
                jj--;
            }
            else if (curs < totals)
            {
                j++;
            }
            else
            {
                cout << a[j].second << " " << a[jj].second << " " << a[i].second << endl;
                return 0;
            }
        }
    }
    cout << "IMPOSSIBLE" << endl;
    return 0;
}