#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

// Complete the bonAppetit function below.
void bonAppetit(int bill[], int k, int b,int n) {
    int sum=0;
for(int i=0;i<n;i++)
{
    if(i!=k)
    {
        sum+=bill[i];
    }
}
if(sum/2==b)
cout<<"Bon Appetit"<<endl;
else
cout<<b-(sum/2)<<endl;
}

int main()
{
    
    int n,k,m;
    cin>>n>>k;
    int bill[n];
    for(int i=0;i<n;i++)
    {
        cin>>bill[i];
    }
    cin>>m;
    bonAppetit(bill,k,m,n);
    return 0;
}
