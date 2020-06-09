#include <iostream>

using namespace std;


bool Xor(bool x, bool y){
	if(x!=y){
		return true;
	}
	else return false;
}


int main(){
	bool a,b;
	cin >> a >> b;

	cout << Xor(a,b);

	return 0;
}