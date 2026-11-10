#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, x;
    cin >> n >> x;

    vector<long long> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    map<long long, long long> pre_sum;
    pre_sum[0] = 1;
    long long cur_sum = 0;
    long long total = 0;
    for (int i = 0; i < n; i++)
    {
        cur_sum += a[i];
        total += pre_sum[cur_sum - x];

        pre_sum[cur_sum]++;
    }
    cout << total << endl;
    return 0;
}