#include <iostream>
using namespace std;

int main(){
	int x,s = 0;
	for(int i = 1; i <= 100; ++i){
		cin >> x;
		s = s + x;
	}

	cout << s;

	return 0;

}