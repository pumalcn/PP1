#include <iostream>

using namespace std;

void swap2(int &a, int &b){
	int c = a;
	a = b;
	b = c;
}

int main(){

	int a[4];

	for(int i = 0; i < 4; i++){
		cin >> a[i];
	}

	swap2(a[0], a[3]);

	for(int i = 0; i < 4; i++){
		cout << a[i] << " " ;
	}



	return 0;
}