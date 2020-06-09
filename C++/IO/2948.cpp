#include <iostream>
#include <cmath>
using namespace  std;

 
int main (){

    int number, c, d;

    cin >> number;

    c=number /60;
    d= c /24;

    cout << c-(d*24)<<" "<<number - (c*60);

 return 0;

}