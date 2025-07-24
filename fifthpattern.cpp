#include<bits/stdc++.h>
using namespace std;

void print5(int n)
{
     for(int i = 1; i <= n; i++)
    {
        for(int j = 0; j < n+1-i; j++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}
void print6(int n)
{
     for(int i = 1; i <= n; i++)
    {
        for(int j = 0; j < n+1-i; j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    int n;
    cin>>n;
    //print5(n);
    print6(n);
    return 0;
}