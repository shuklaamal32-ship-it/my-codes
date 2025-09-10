#include<bits/stdc++.h>

using namespace std;
int StackTop(stack s)
{
    int x;
  x=s.item[s.top];
  return x;
}

int main()
{
    stack(s);
    s.top=-1;
    int x= StackTop(s);
    cout<<x<<"\n";
    return 0;
}
