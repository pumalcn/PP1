#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int k,n,a,b;
	cin >> k >> n;
	a = (n - 1)/k + 1;
	b = (n - 1)%k + 1;


	cout << a << " " << b << endl;
	return 0;
}