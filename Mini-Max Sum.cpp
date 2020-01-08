#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the miniMaxSum function below.
void miniMaxSum(vector<int> arr) {


}

int main()
{
    long int a[5],min=0,max=0;
    for(int i=0;i<5;i++)
    {
        cin>>a[i];
    }
    sort(a,a+5);
    for(int i=0;i<4;i++)
    {
        min+=a[i];
    }
    for(int i=1;i<5;i++)
    {
        max+=a[i];
    }
    
    cout<<min<<" "<<max;
    return 0;
}
