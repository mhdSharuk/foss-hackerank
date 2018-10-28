#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ar[n];
    
    int c1 = 0;
    int c0 = 0;
    int cneg1 = 0;
    for(int i = 0;i<n;i++){
      cin>>ar[i];
        if(ar[i]>0)
            c1++;
        else if(ar[i]<0)
            cneg1++;
        else
            c0++;
    }
    float  dc1;
    float dc0;
    float  dneg1;
    dc1 = (float)c1/n;
    dc0 = (float)c0/n;
    dneg1 = (float)cneg1/n;
    cout<<dc1<<endl;
    cout<<dneg1<<endl;
    cout<<dc0;
    return 0;
}
