#include <bits/stdc++.h>

using namespace std;

int main()
{
    long int n;
    cin>>n;
    long int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
sort(a,a+n,greater<int>());

int count=1;
for(int i=0;i<=0;i++)
    {
        for(int j=1;j<n;j++)
        if(a[i]==a[j])
        {
            count++;
            
        }
    }
    cout<<count;
    
    return 0;
}
