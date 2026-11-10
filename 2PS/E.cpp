#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        int sum=0;
        for(int i=1;i<=n;i++){
            cin>>a[i];
            sum+=a[i];
        }
        int arr[n];
        copy(a,a+n,arr);
        sort(arr,arr+n);
        bool flag=true;
        for(int i=1;i<=n;i++){
            if(a[i]!=arr[i]){
                flag=false;
            }
        }
        if(sum%2==0 && flag==false){
            cout<<"No"<<endl;
        }else{
            cout<<"Yes"<<endl;
        }
    }
    return 0;
}