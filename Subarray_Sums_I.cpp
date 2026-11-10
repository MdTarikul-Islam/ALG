#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int i = 0, j = 0;
    int cur = 0;
    int total = 0;
    while (j < n)
    {
        cur += a[j];
        while (cur > k)
        {
            cur -= a[i];
            i++;
        }
        if (cur == k)
            total++;
        j++;
    }
    cout << total << endl;
    return 0;
}