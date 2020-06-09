#include <iostream>
using namespace std;

int main(){
	int x,p,y;
	int years = 1;

	while(x < y){
		x *= (1 + p/100.0);
		x *= 100;
		x = int(x);
		x /=100;
		years++;
	}
	cout << years;
	return 0;
}