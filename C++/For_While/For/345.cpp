#include <iostream>
#include <cmath>
using namespace std;
 int main(){
 	int a,b,c,d;
 	cin >> a >> b >> c >> d;
 	for(int i=1000;i>=0;i--){
 		if(a*pow(i,3) + b*pow(i,2) + c*i + d == 0){
 			cout << i << " ";
 		}

 	}
      return 0;
 }