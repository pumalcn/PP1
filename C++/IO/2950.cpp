#include <iostream>
using namespace  std;

int main (){

    int number, a,b,c, d;

    cin >> number;

    a=number%10;
    b=(number/10)%10; 
    c=(number / 100)%10;
    d= number/1000;

    cout << (d*10+c)-(a*10+b)+1<<endl;

 return 0;
}