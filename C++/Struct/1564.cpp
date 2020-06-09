#include <iostream>

using namespace std;

void fill(int a, int b, int *x, int n){
	for(int i = 0; i < n; i++){
		*(x + i) = pow(a + i, 2);
	}
}

int main(){
	int a,b;
	cin >> a >> b;
	int n = b - a + 1;
	int *x = new int[n];
	fill(a,b,x,n);
	for(int i = 0; i < n; i++){
		cout << *(x + i) << " ";
	}

	return 0;
}