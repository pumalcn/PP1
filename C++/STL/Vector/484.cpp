#include <iostream>     // std::cout
#include <algorithm>    // std::reverse
#include <vector>       // std::vector
using namespace std;

// bool f(int x, int y){
//   if(x >= y) return true;
//   return false;
// }
int main () {
  int n;
  cin >> n;
  vector<int> myvector;
  int k;
  // set some values:
  for (int i=0; i<n; ++i){
    cin >> k;
    myvector.push_back(k);

  }    

  //sort(myvector.begin(),myvector.end(),f);    

  
  for (vector<int>::iterator it=myvector.end(); it!=myvector.begin(); --it)
    cout << *it << " ";
  
  return 0;
}