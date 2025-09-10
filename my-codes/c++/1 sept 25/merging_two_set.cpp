#include<bits/stdc++.h>
using namespace std;
/*************************/
void traversing(vector<int>&C,int x,int m,int n)
{
    cout<<"the newly formed array is \n";
    for(int k=0;k<x;k++)
    {
        cout<<C[k]<<" ";
    }
    cout<<"\n";
    cout<<"number of elements in first array : "<<m<<"\n";
    cout<<"number of elements in second array : "<<n<<"\n";
    cout<<"number of elements in newly formed array is : "<<C.size();

}
/*************************/
void mergingArray(vector<int>&A,vector<int>&B,int m,int n)
{

    vector<int>C(m+n);
    int i=0,j=0,k = 0;
   while(i<m && j<n)
   {
       if(A[i]<B[j])
       {
            C[k]=A[i];
           i++;
           k++;
       }
       else if(B[j]==A[i])
       {
           C[k]=B[j];
           C[k+1]=A[i];
           i++;
           j++;
           k=k+2;
       }
       else
       {
           C[k]=B[j];
           j++;
           k++;
       }
   }
   while(i<m)
   {
       C[k]=A[i];
       i++;
       k++;
   }
   while(j<n)
   {
       C[k]=B[j];
       j++;
       k++;
   }
   traversing(C,k,m,n);
}
/**************************/
int main()
{
    int m,n;
    cout << "enter the number of element in first array \n";
    cin >> m;
    cout << "enter the number of element in second array \n";
    cin >> n;
    vector<int>A(m);
    cout << "enter the elements of the first array :\n";
    for(int i=0;i<m;i++)
    {
        cin >>A[i];
    }
    vector<int>B(n);
    cout << "enter the elements of the second array :\n";
    for(int j=0;j<n;j++)
    {
        cin >>B[j];
    }
   mergingArray(A,B,m,n);
   return 0;
}
