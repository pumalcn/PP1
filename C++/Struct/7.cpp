#include <iostream>

using namespace std;


int main(){

	//int,double,char,bool,float,long long
	//array, string

	int a = 5;

	int &b = a;
	a = 10;

	cout << a << endl;
	b = 15;
	cout << a << endl;
	cout << b << endl;

	cout << &a << " " << &b << endl;

	return 0;
}