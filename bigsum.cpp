#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    long long int ar[n];
    long long int value;
    for(int i = 0; i<n; i++){
        cin>>ar[i];
    }
    for(int j = 0;j<n;j++){
        value += ar[j];
    }
    cout<<value;
    return 0;
}


