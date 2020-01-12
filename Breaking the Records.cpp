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
    int score,min=0,max,countmin,countmax;
    for(int i=0;i<n;i++)
    {  
            if(i==0)
            {
                
                min=a[i];
                max=a[i];
                countmin=0;
                countmax=0;
            }
            score=a[i];
            if(min>score)
            {   
                min=score;
                countmin++;
                
            }
            else if(score>max)
            {
                max=score;
                countmax++;
            }
     
    }
    cout<<countmax<<" "<<countmin;
    return 0;
}
