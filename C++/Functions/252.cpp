#include <iostream>
#include <cmath>
using namespace std;
 
double power(double a, int n){
    return pow(a,n);
}
 int main()
{
    int m;
    double b;
    cin >> b >> m;
    cout << power(b,m);
    return 0;
}