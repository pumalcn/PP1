#include <iostream>
#include <cmath>
using namespace std;
 int main(){
    int a,b,c;
  cin>>a>>b>>c;
 
  if (a>b) swap(a,b);
  if (b>c) swap(b,c);
  if (a>b) swap(a,b);
 
  if ((b+c)>a && (c+a)>b && (b+a)>c)
  {
    if (c*c == a*a + b*b)
      cout<<"rectangular";
    else if (c*c < a*a + b*b)
      cout<<"acute";
    else
      cout<<"obtuse";
  }   
  else
    cout<<"impossible";

    
     return 0;
}