#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        double a, b;
        cin >> a >> b;
        if (10 * 10 / a < 15 * 15 / b)
        {
            cout << "Large" << endl;
        }
        else if (10 * 10 / a > 15 * 15 / b)
        {
            cout << "Small" << endl;
        }
        else
        {
            cout << "Equal" << endl;
        }
    }
    return 0;
}