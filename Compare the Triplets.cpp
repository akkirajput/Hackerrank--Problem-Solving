#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[3],b[3],ascore=0,bscore=0;
    for(int i=0;i<3;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<3;i++)
    {
        cin>>b[i];
    }
    
    for(int i=0;i<3;i++)
    {
        if(a[i]>b[i])
        {
        ascore++;
        
        }
        else if(a[i]<b[i])
        {       
        bscore++;
        
    }
   

    }
    cout<<ascore<<" "<<bscore;
    return 0;
}
