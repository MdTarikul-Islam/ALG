// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n, l, r;
//         cin >> n >> l >> r;

//         vector<long long> a(n + 1);
//         vector<long long> pref(n + 1, 0);

//         for (int i = 1; i <= n; i++)
//         {
//             cin >> a[i];

//             pref[i] = pref[i - 1] + a[i];
//         }

//         long long ans = 0;

//         if (l > 1)
//         {
//             long long left = pref[l - 1];
//             ans = max(ans, left);
//         }
//         if (r < n)
//         {
//             long long right = pref[n] - pref[r];

//             ans = max(ans, right);
//         }

//         cout << ans << endl;
//     }
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,l,r;
        cin>>n>>l>>r;
        int p=0,s=0;
        for(int i=1;i<=n;i++){
            int x;
            cin>>x;
            if(i<l){
                p+=x;
            }
            if(i>r){
                s+=x;
            }
        }
        cout<<max(p,s)<<endl;
    }
    return 0;
}