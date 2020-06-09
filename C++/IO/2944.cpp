#include <iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    int b;
    cin>>b;
    int n;
    cin>>n;
    int p;
    p=(a*100+b)*n;
    cout<<p/100<<" "<<p%100;
    return 0;
}