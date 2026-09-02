#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        int mx = 0;
        int sum=0;

        for (int i = 1; i < n; i++)
        {

            for (int j = i + 1; j <= n; j++)
            {
                if (a[i] <= a[j])
                {

                    sum = a[i] + a[j];
                    mx = max(mx, sum);
                }
            }
        }
        if(mx==0){
            cout<<a[1]<<endl;
        }else{
            cout << mx << endl;
        }
        
    }
    return 0;
}