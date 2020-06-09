#include <iostream>
#include <cmath>
using namespace std;
 int main(){
    int a ,b ,c ,d ;
  cin>>a >>b>>c>>d;
 
  int rD = c - a;
  int kD = d - b;
  if (kD < 0)
  {
    kD += 100;
    rD--; 
  }
  cout<<rD<<' '<<kD; 





    
     return 0;
}