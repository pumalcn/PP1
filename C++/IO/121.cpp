#include <iostream>
#include <cmath>

using namespace std;


int main(){
	int A,i;
	cin >> A >> i;
	// 101
	// 010
	// 1001
	// 1000

	cout << ((A>>i)<<i) << endl;
	return 0;
}