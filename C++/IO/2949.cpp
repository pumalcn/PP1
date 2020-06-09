#include <iostream>
#include <cmath>

using namespace  std;

int main (){

    int h,a,b, c,step,k ;

    cin >> h >>a >> b;
    step=a-b; 
    c=h-a;
    k=1+c/step+(c%step+step-1)/step;

    cout << k;

 return 0;

}