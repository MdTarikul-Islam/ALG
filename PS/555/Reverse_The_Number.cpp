#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        string s;
        cin >> s;
        bool flag = false;
        for (int i = s.size()-1; i >= 0; i--)
        {

            if (s[i] == '0' && flag == false)
            {
                flag = false;
            }
            else
            {
                flag = true;
            }

            if (flag==true)
            {
                cout << s[i];
            }
        }

        cout << endl;
    }
    return 0;
}