#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]<38)
        cout<<a[i]<<endl;
        else{
            if((a[i]+1)%5==0)
            cout<<a[i]+1<<endl;
            else if((a[i]+2)%5==0)
            cout<<a[i]+2<<endl;
            else
            cout<<a[i]<<endl;
        }
    }
    return 0;
}
