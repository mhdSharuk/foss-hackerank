#include <bits/stdc++.h>
using namespace std;
int main(){
    long int f,a[10000],b[100000],i,j,n,l=0,m=0;
    
    for(i=0;i<3;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<3;i++){
        cin>>b[i];
    }
    for(i=0;i<3;i++){
        if(a[i]<b[i]){
            l=l+1;
        }
        else if(a[i]>b[i]){
            m=m+1;
        }
        else
            f++;
            
    }
    cout<<m<<" "<<l;
    
}
