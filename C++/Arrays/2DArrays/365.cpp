#include <iostream>

using namespace std;


int main(){

  int n;

  cin >> n;

  int a[2*n+1][2*n+1];

  int dr[] = {-1,0,1,0};
  int dc[] = {0,-1,0,1};
  int index = 0;

  int t[4*n + 1];
  int index2 = 0;
 
  for(int i = 1; i <= 2 *n;++i){
     for(int j = 1; j <= 2; ++j){
       t[index2] = i;
       index2++;
     }
  }

  t[index2] = 2 * n;

  int r = n;
  int c = n;
  int k = 0;
  a[r][c] = k;

  for(int i = 0; i < 4 *n + 1; ++i){
    for(int j = 1; j <= t[i]; ++j){
      r = r + dr[index];
      c = c + dc[index];
      k++;
      a[r][c] = k;
    }
    index = (index + 1)%4;
  }

  for(int i = 0; i < 2 * n + 1; ++i){
    for(int j = 0; j < 2 * n + 1; ++j){
      cout << a[i][j] << "\t";
    }
    cout << endl;
  }

  return 0;
}