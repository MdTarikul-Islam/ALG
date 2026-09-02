#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int m, tp;
        cin >> m >> tp;

        
        int flag;
        if (tp<m)
        {
            flag = m-tp;
        }
        else
        {
            
            int remainPoint=tp-m;
            flag=remainPoint%2;
        }
        cout << flag << endl;
    }
    return 0;
}