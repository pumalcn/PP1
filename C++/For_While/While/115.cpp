#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	int pow_2 = 1; 

	while(pow_2 <= n){
		cout << pow_2 << ' ';
		pow_2*= 2;
	}

	return 0;
}