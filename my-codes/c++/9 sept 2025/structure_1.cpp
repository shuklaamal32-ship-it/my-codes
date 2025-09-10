#include<bits/stdc++.h>
using namespace std;

int main()
{
  struct dist
  {
      int km;
      int m;
  }  ;
  struct dist d1;
  cin>>d1.km>>d1.m;
  struct dist d2;
  cin>>d2.km>>d2.m;
  struct dist d3;
  d3.m=d1.m+d2.m;
  int y= d3.m/1000;
  int x=d3.m%1000;
  d3.m=y;
  d3.km=d1.km+d2.km+x;
  cout<<d3.km<<" "<<d3.m;
    return 0;
}
