#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--){
        int n;
        cin>>n;
        int a[n];
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }

        for(int i=1;i<=n;i++){
            if(i%2==0){
                a[i]-=1;
            }
            else{
                a[i]+=1;
            }
        }

    }
    return 0;
}