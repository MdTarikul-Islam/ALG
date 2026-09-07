#include <bits/stdc++.h>
using namespace std;
int main()
{
    int s;
    cin >> s;
    if (1 + 2 + 3 == s)
    {
        cout << 4;
    }
    else if (1 + 2 + 4 == s)
    {
        cout << 3;
    }
    else if (1 + 3 + 4 == s)
    {
        cout << 2;
    }
    else if (2 + 3 + 4 == s)
    {
        cout << 1;
    }
    return 0;
}