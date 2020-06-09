#include <iostream>

using namespace std;


int main(){

	int a = 4;

	int b[10];//int * b = new int[10];

	b[0] = 1;
	//cout << *b << " "<< b[0];//*(b+0)

	int * c = b;

	cout << b[0] << " " << c[0] << endl;

	cout << *b << " " << *c << endl;

	int q = 10;
	int &d = q;
	cout << *(&d); 

	return 0;
}