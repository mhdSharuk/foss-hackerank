#include <bits/stdc++.h>

using namespace std;

// Complete the staircase function below.
void staircase(int n) {
   int a = 1;
  for(int i =0;i<=n-1;i++){
       
      for(int j = 0;j<n;j++)
          if((i+j)>(n-2)){
          cout<<"#";
          }
      else{
          cout<<" ";
      }
      cout<<"\n";
  } 
   

}

int main()
{
    int n;
    cin >> n;
    staircase(n);

    return 0;
}

