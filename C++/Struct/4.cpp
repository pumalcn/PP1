#include <iostream>

using namespace std;

void swap2(int &a, int &b){
	int c = a;
	a = b;
	b = c;
}


int main(){
	int x = 3;
	int y = 4;

	swap2(x,y);
	cout << x << " " << y;

	return 0;
}