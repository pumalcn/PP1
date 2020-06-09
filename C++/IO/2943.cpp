#include <iostream>
#include <cmath>
using namespace std;

int main(){

 int number,a,b,c,d;

 cin>>number;

 a=number/100;

 b=number/10;

 c=b%10;

 d=number%10;

 cout<<a+d+c;
return 0;

}