#include <iostream>

using namespace std;


int main(){
	int * a = new int[10];
	int * b = new int[10];

	*(a + 0) =  10;
	*(b + 0) = 20;

	int * c;

	c = a;
	a = b;
	b = c;

	cout << a[0] << " " << 	b[0];
	return 0;
}