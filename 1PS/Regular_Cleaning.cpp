#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<=100;i+=10){
        if(n<i){
            cout<<i-n;
            break;
        }
    }
    return 0;
}