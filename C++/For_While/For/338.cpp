#include <iostream>
#include <cmath>
using namespace std;
 int main(){
 	int x;
 	int b=0;
 	cin >> x;
 	for(int i=1;i<=x;i++){
 		if (x%i==0){
           b++;
 		
 	}
 	}
 	cout << b;
 	return 0;
 }