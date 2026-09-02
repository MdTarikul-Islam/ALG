#include <bits/stdc++.h>
using namespace std;
void factorial(int x){
    int p=1;
    for(int i=2;i<=x;i++){
        p*=i;
    }
    cout<<p<<endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        factorial(n);
    }
    return 0;
}