#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if (n == 0)
    {
        cout << 0 << endl;
        return 0;
    }
    long long int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    long long int sum = 0;
    long long int val = LLONG_MAX;
   

    for (int i = 0; i < n; i++)
    {
        sum += a[i];
        if (a[i] % 2 != 0)
        {
            val = min(val, a[i]);
        }
    }

    if (sum % 2 == 0)
    {
        cout << sum << endl;
    }
    else
    {
        cout << sum - val << endl;
    }

    return 0;
}