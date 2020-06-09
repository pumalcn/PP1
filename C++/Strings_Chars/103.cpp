#include <iostream>
using namespace std;


int main(){
	char c;
	cin >> c;
	if(c >= 97 && c <= 122){
		c = c - 32;
	}

	cout << c;
	return 0;
}