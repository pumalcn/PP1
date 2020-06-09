#include <iostream>

using namespace std;

int mn(int a, int b, int c, int d){
	return min(min(a,b),min(c,d));
}

int main(){
	int a,b,c,d;

	cin >> a >> b >> c >> d;
	cout << mn(a,b,c,d);

	return 0;
}