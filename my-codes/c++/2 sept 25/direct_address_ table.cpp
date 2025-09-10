#include<bits/stdc++.h>

using namespace std;

int main()
{
     int n,x;
    cout<<"enter he number of elements in array : ";
    cin>>n;

    vector<int>a(n);

    cout<<"enter the elements of array : \n";
    for(int i = 0 ; i<n;i++)
    {
        cin>>a[i];
    }

    int mini=a[0],maxi=a[0];
    for(int i=0;i<n;i++)
    {
        if(a[i]>maxi)
            maxi=a[i];
        if(a[i]<mini)
            mini=a[i];
    }


    vector<int>DAT(maxi+1);

    for(int i=0;i<=n-1;i++)
    {
        DAT[a[i]]=1;
    }
    for(int i = mini ; i<=maxi;i++)
    {
        if(DAT[i]==0)
        {
            cout<<i<<endl;

        }
    }
    return 0;
}
