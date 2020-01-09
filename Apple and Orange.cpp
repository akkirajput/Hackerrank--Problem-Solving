#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the countApplesAndOranges function below.
void countApplesAndOranges(int s, int t, int a, int b, int apples[], int oranges[],int sizea,int sizeo) {

int applepos[sizea],orangepos[sizeo],totalapple=0,totalorange=0;

for(int i=0;i<sizea;i++)
{
    applepos[i]=a+apples[i];
   
}

for(int i=0;i<sizeo;i++)
{
    orangepos[i]=b+oranges[i];
   
}

for(int i=0;i<sizea;i++)
{
    if(s<=applepos[i]&&applepos[i]<=t)
    totalapple++;
}
for(int i=0;i<sizeo;i++)
{
    if(s<=orangepos[i]&&orangepos[i]<=t)
    totalorange++;
}
cout<<totalapple<<endl<<totalorange<<endl;

}

int main()
{
    int s,t,a,b,noofapp,noofora;
    cin>>s>>t;
    cin>>a>>b;
    cin>>noofapp>>noofora;
    int apples[noofapp],oranges[noofora];
    for(int i=0;i<noofapp;i++)
    cin>>apples[i];
    for(int i=0;i<noofora;i++)
    cin>>oranges[i];

    countApplesAndOranges(s, t, a, b, apples, oranges,noofapp,noofora);

    return 0;
}
