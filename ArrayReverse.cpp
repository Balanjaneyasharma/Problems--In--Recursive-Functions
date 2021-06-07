#include<iostream>
#include<array>
using namespace std;
void ArrayReverse(int l,int r, int a[])
{
   if(l>r)
   {
      return;
   }
   swap(a[l],a[r]);
   return ArrayReverse(l+1,r-1,a);
}
int main()
{
   int n;
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++)
   {
      cin>>a[i];
   }
   ArrayReverse(0,n-1,a);
   for(int i=0;i<n;i++)
   {
      cout<<a[i]<<' ';
   }
   return 0;
}
