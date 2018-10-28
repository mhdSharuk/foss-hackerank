#include <bits/stdc++.h>

using namespace std;

int main(){
    long int a[1000000],n,p,i;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    long int t=0;
    for(i=0;i<n;i++){
        t=t+a[i];
    }
    cout<<t;
}
