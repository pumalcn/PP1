#include <iostream>
#include <string>
using namespace std;


int main(){
	char c;
	cin >> c;

	if(c >= 'A' && c <= 'Z'){
		c = tolower(c);
	}
	else if(c >= 'a' && c <= 'z'){
		c = toupper(c);
	}

	cout << c << endl;

	return 0;
}