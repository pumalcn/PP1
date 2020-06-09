#include <iostream>
using namespace std;

int main(){
  int n;
  cin >> n;
  int cur = 1 , count = 0;
 
  for (int i = 1; i <= n; i++)
  {
    cout<< cur <<' ';
    count++;
    if (cur == count)
    {
      cur++;
      count = 0;   
    }
  }
  return 0;
}