#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;

	int pow2 = 1,k = 0;
	while(pow2 <= n){
		pow2 <<= 1;
		k++;
	}
	cout << k;

	return 0;
}