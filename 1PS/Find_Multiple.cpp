#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, y, z;
    cin >> x >> y >> z;
    bool flag = true;
    for (int i = x; i <= y; i++)
    {
        if (i % z == 0)
        {
            cout << i;
            flag = false;
            break;
        }
    }
    if (flag)
    {
        cout << -1;
    }
    return 0;
}