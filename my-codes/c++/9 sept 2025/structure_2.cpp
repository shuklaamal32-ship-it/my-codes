#include<bits/stdc++.h>
using namespace std;
#define STACKSIZE 10
/***************************/
Initialize()
{
    S.Top=-1;
}
/*******************************/
Push(int x)
{
   if(S.Top == (STACKSIZE-1))
    cout<<"stack Overflows";
   exit(1);
   else{
    S.Top=S.Top+1;
    S.Item[S.Top]=x;
   }
}
/************************/
int pop()
{
    if(IsEmpty())
    {
        cout<<"stack Underflows";
        exit(1);
    }
    else
    {
        int x = S.Item[S.Top];
        S.Top=S.Top-1;
        return x;
    }
}
/***********************/
struct stk
{
 int item[STACKSIZE];
 int TOP;
};
struct stk S;

/******************************/
IsEmpty(s)
{
    if(S.Item[S.Top]==-1)
    {
        return 1;
    }
    else return 0;
}
/******************************/
int StackTop()
{
    return S.Item[S.Top];
}
int main()
{
   Initialize();
   push(300);
   push(400);
   push(200);
   cout<<Pop()<<" ";


   return 0;
}
