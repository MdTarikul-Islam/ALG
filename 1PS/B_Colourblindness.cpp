#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int count = 0;
    while (t--)
    {
        int n;
        cin >> n;
        char f[n], s[n];
        cin >> f >> s;
        int strln = strlen(f);

        count++;
        if(s==f){
            cout << "YES" << endl;
            cout << count << endl;
        }
        if (f[strln - 1] == s[strln - 1])
        {
            cout << "YES" << endl;
            cout << count << endl;
        }
        else if(f[strln-2]==s[strln-2])
        {
            cout<<"YES"<<endl;
            cout<<count<<endl;
        }
        int same=0;
        for(int i=0;i<=n;i++){
            if(f[i]==s[i]){
                same++;
            }
        }
        if(same==n){
            cout<<"YES"<<endl;
            cout<<count<<endl;
        }
    }
    return 0;
}