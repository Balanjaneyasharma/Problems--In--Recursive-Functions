include <bits/stdc++.h>
#include<string.h>
using namespace std;
void permutasing(string s, string ss, int n, int vi[])
{
    if (s.size()==ss.size())
    {
        cout<<ss<<endl;
    }
    for(int i=0;i<n;i++)
    {
        if (vi[i]==0)
        {
            vi[i]=1;
            permutasing(s,ss+s[i],n,vi);
            vi[i]=0;
        }
    }
}
int main()
{
    string s;
    cin>>s;
    string ss;
    int n =s.size();
    int vi[n]={0};
    permutasing(s,ss,n,vi);
    return 0;
}
