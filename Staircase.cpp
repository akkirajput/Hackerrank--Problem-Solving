#include <bits/stdc++.h>

using namespace std;


int main()
{
    int n;
    cin >> n;
    for(int i=1;i<=n;i++)
    {
     for(int j=i;j<=n-1;j++)
     {
         cout<<" ";
     }
     int k=i;
     while(k>0)
     {
     cout<<"#";
     k--;
     }
     cout<<endl;
    }

    return 0;
}
