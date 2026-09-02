#include <bits/stdc++.h>
using namespace std;
int main()
{
    char s[100000];
    cin >> s;
    int len = strlen(s);
    int freq[26] = {0};
    for (int ind = 0; ind < len; ind++)
    {
        int ascii_val = (int)s[ind];
        int index_within_25 = ascii_val - 97;
        freq[index_within_25]++;
    }

    bool flag = true;
    for (int f_i = 0; f_i < 26; f_i++)
    {
        if (freq[f_i] == 0)
        {
            cout << (char)(f_i + 97);
            flag = false;
            break;
        }
    }

    if (flag)
    {
        cout << "None";
    }

    return 0;
}