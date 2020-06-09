#include <iostream>

using namespace std;


bool Election(bool x, bool y, bool z){
	int golos = x + y + z;
	if(golos == 1 || golos == 0) return false;
	if(golos > 1 ) return true;
}


int main(){
	bool a,b,c;

	cin >> a >> b >> c;
	cout << Election(a,b,c);
	return 0;
}