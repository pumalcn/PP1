#include <iostream>


using namespace std;

int phi(int n){
	if(n == 0) return 1;
	if(n == 1) return 1;
	return phi(n-1) + phi(n-2);
}

int main(){
	int a;
	cin >> a;
	cout << phi(a) << endl;
	return 0;
}