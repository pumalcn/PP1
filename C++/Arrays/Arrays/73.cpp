#include <iostream>
using namespace std;
 int main(){
  int n;
  cin >> n;
  int a[n];
  for(int i=0;i<n;i++){
      cin >> a[i];
  }
  int k=0;
  for(int i=1;i<n;i++){
      if(a[i-1] < a[i])
        k++;
  }
  cout << k + 1 ;
  return 0;
 }