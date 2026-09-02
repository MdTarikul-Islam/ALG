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
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a , a + n);
        int count1 = 0;
        for (int i = 0, j = i + 1; i < n; i++, j++)
        {
            if (a[i] == 1 && a[j] == 1)
            {
                count1++;
                i++;
                j++;
            }
            else
            {
                count1++;
            }
        }
        cout << count1 << endl;
    }
    return 0;
}