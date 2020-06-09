#include <iostream>
#include <cmath>
using namespace std;
 int main(){
    int cost1 = 15, cost10 = 125, cost60 = 440;
  int n, k1, k10, k60;
  cin >> n;
  k60 = n / 60;
  n %= 60;
  k10 = n / 10;
  k1 = n % 10;
 
  if (k1 * cost1 > cost10)
  {
    k1 = 0;
    k10++;
  }
  if (k1 * cost1 + k10 * cost10 > cost60)
  {
    k1 = 0;
    k10 = 0;
    k60++;
  }
  cout<<k1<<" "<<k10<<" "<<k60;

    
     return 0;
}