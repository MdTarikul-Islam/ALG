#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;

        bool flag = false;
        int n = str.size();

        for (int i = 0; i < n - 1; i++)
        {
            cout << str[i];
            if (str[i] == str[i + 1] && flag == false)
            {
                if (str[i] == 'z')
                {
                    cout << 'a';
                }
                else
                {
                    cout << char(str[i] + 1);
                }
                flag = true;
            }
        }

        if (flag == true)
        {
            cout << str[n - 1] << endl;
        }
        else
        {
            if (str[n - 1] == 'z')
            {
                cout << str[n - 1] << 'a' << endl;
            }
            else
            {
                cout << str[n - 1] << char(str[n - 1] + 1) << endl;
            }
        }
    }
    return 0;
}