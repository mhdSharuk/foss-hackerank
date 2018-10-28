#include <bits/stdc++.h>

using namespace std;

int main(){
    long int a[1000][1000],i,j,k=0,p=0,n;
    cin>>n;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
        if(i==j){
            k=k+a[i][j];
        }
        if((i+j)==n-1)
        {
            p=p+a[i][j];
        }
        }
    }
    int w;
    w=k-p;
    cout<<abs(w);
}
