#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,x,flag=0,number;
    int arr[n];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        arr[i]=x;
    }
    for(int j=0;j<n;j++)
    {
        for(int k=0;k<n;k++)
        {
            if(arr[j]<arr[k])
                flag=1;
        }
        if(flag==0)
        {number=arr[j];
         flag=0;}
        else
            flag=0;
    }
    for(int p=0;p<n;p++)
    {
        if(arr[p]==number)
            flag++;
    }
    cout<<flag<<endl;
}
