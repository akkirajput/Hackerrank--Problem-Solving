#include <bits/stdc++.h>

using namespace std;
int main()
{
    long int n,sum1=0,sum2=0;
    cin>>n;
    long int a[n][n],temp[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
           if(i==j)
           {
               sum1+=a[i][j];
           }
        }
    }

    for(int i=0;i<n;i++)
    {
        for(int j=(n-1)-i;j==(n-1)-i;j--)
        {  
            sum2+=a[i][j];
            
        }
    }
    
        
    
    cout<<abs(sum1-sum2)<<endl;
    return 0;
}
