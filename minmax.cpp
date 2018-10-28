#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    long int a[5],n,s=0,t=0,i,j;
    long int amax ,amin;
        for(i=0;i<5;i++){
            cin>>a[i];
            
        }
    for(i=0;i<5;i++){
        s=s+a[i];
        
    }
                sort(a,a+5);
            
            amax=s-a[4];
            amin=s-a[0];
            cout<<amax<<" "<<amin;
    return 0;
}
