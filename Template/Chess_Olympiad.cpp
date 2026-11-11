#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, y, z;
    cin >> x >> y >> z;
    int op = z + 0.5 * y;
    int rem = 4 - (x + y + z);
    int mx = x + 0.5 * y + rem;
    if (mx > op)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
    return 0;
}