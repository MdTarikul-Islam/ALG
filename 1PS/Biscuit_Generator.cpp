#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, t;
    cin >> a >> b >> t;
    int count = 0;
    for (int i = a; i < t + 0.5; i = i + a)
    {
        count = count + b;
    }
    cout << count;
    return 0;
}