#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int ans=0;
        for(int i=0; i<n; i++)
        {
            int num;
            if(i==n-1)
            {
                num=(s[i]-'0')*10+(s[0]-'0');
            }
            else
            {
                num=(s[i]-'0')*10+(s[i+1]-'0');
            }

            if(num%4==0)
            {
                ans++;
            }
        }

        cout<<ans<<endl;
    }

    return 0;
}