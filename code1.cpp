#include<iostream>
using namespace std;
int main()
{
 int N,H,x;
  cin>>N>>H>>x;
  int a[N];
  for(int i=0;i<N;i++)
  {
  	cin>>a[i];
  }
  for(int i=0;i<N;i++)
  {
      x+=a[i];
      if(x>=H)
      {
       cout<<"YES"<<endl;
       break;
       }
       else
       {
         x-=a[i];
       }
       
  }
  cout<<"NO"<<endl;
}
