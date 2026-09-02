#include <bits/stdc++.h>
using namespace std;
int main()
{
    char s[200001], t[200001];
    cin >> s >> t;
    int ln = strlen(s);
    int count = 0;
    for (int i = 0; i <= ln; i++)
    {
        if (s[i] != t[i])
        {
            count++;
        }
    }
    cout << count;

    return 0;
}