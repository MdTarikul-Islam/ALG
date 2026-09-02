#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--){
        int f,s;
        cin>>f>>s;
        int fv=(f*100)/10;
        int sv=(s*100)/20;
        if(fv==sv){
            cout<<"ANY"<<endl;
        }
        else if(fv>sv){
            cout<<"FIRST"<<endl;
        }
        else{
            cout<<"SECOND"<<endl;
        }
    }
    return 0;
}