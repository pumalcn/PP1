#include <iostream>
#include <cmath>
using namespace std;
 int main(){
 	int a,b,c,d,e;
 	int k=0;
 	cin >> a >> b >> c >> d >> e;
 	for(int i=1000;i>=0;i--){
 		
 		if((a*pow(i,3) + b*pow(i,2) + c*i + d)/(i - e) == 0){
 			k++;
 		}

 	}
 	  cout << k;
      return 0;
 }