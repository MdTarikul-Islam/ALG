#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n<=10){
            cout<<"Lower Double";
        }
        else if(n<=15){
            cout<<"Lower Single";
        }
        else if(n<=25){
            cout<<"Upper Double";
        }
        else{
            cout<<"Upper Single";
        }
        cout<<endl;
    }
    return 0;
}