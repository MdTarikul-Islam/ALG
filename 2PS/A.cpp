#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r,b;
    cin>>r>>b;
    cout<<max((min(r,b))*5+(r-(min(r,b)))*1,(min(r,b))*5+(b-(min(r,b)))*2);
    return 0;
}