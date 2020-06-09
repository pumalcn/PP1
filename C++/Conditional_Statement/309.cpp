#include <iostream>
#include <cmath>
using namespace std;
 int main(){
     double a,b,c;
  cin>>a>>b>>c;
  double d,x1,x2;
  d=b*b-4*a*c;
  if (d>=0)
  {
    x1=(-b+sqrt(d))/(2*a);
    printf("%0.8f\n",x1);
    if (d>0)
    {
      x2=(-b-sqrt(d))/(2*a);
      printf("%0.8f\n",x2);
    }
  }

    
     return 0;
}
