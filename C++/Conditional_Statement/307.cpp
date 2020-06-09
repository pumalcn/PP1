#include <iostream>
#include <cmath>
using namespace std;
 int main(){
    int a,b,c;
  cin>>a>>b>>c;
 
  if ( b + c > a && c + a > b && b + a > c)
    cout<<"YES";
  else
    cout<<"NO";


    
     return 0;
}