#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        string ss;
        int b = 0;
        int B = 0;

        int n = s.size();
        for (int i = n - 1; i >= 0; i--)
        {
            if (s[i] == 'b')
            {
                b++;
                continue;
                ;
            }

            if (s[i] == 'B')
            {
                B++;
                continue;
            }

            if (b > 0 && s[i] >= 'a' && s[i] <= 'z')
            {
                b--;
                continue;
            }
            if (B > 0 && s[i] >= 'A' && s[i] <= 'Z')
            {
                B--;
                continue;
            }

            ss.push_back(s[i]);
        }
        reverse(ss.begin(), ss.end());
        cout << ss << endl;
    }
    return 0;
}