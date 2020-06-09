#include <iostream>
#include <cmath>
using namespace std;
 int main(){
 	int a,b;
 	cin >> a >> b; 
 	for(int i=a;i<=b;i++){
 		int c = sqrt(i);
 		if(i==c*c){
 			cout << i << " ";
 			
 		}
 	}
      return 0;
 }