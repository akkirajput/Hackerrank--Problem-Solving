#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'getTotalX' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER_ARRAY a
 *  2. INTEGER_ARRAY b
 */

int getTotalX(int a[], int b[],int n,int m) {
    int num=0,count=0,flag=0;
    sort(a,a+n);
    sort(b,b+m);
    int end;
    end=a[n-1];
  
    for(int num=end;num<=b[0];num+=end)
    {
        
        
        for(int j=0;j<=n-1;j++)
        {
            if(num%a[j]==0)
            {
                flag++;       
        
            }
        }
       
        for(int j=0;j<=m-1;j++)
        {
            if(b[j]%num==0)
            {
                flag++;
        
            }
        }
        
        if(flag==(n+m))
        {
            count++;
           
        }
        flag=0;
       
        
    }
    return count;
    
    
}

int main()
{
   int n,m;
   cin>>n>>m;
   int arr[n],brr[m];
   for(int i=0;i<n;i++)
   {
       cin>>arr[i];
   }
   for(int i=0;i<m;i++)
   {
       cin>>brr[i];
   }
    int total = getTotalX(arr, brr,n ,m);

    cout << total << "\n";

    

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}
