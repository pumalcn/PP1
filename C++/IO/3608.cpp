#include <iostream>
#include <cmath>

using namespace std;


int main(){
	float c;
	cin >> c;
	// 17.9 - 17.0
	cout << ceil(c)<< endl;// upward
	cout << round(c) << endl;// nearest int
	cout << c - floor(c) << endl;
	return 0;
}