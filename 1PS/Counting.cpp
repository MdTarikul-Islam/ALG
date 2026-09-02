#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, y;
    cin >> x >> y;
    int count = 0;
    for (int i = x; i <= y; i++)
    {
        count++;
    }
    cout << count;
    return 0;
}