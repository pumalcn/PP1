#include <iostream>

using namespace std;


string f(int x){
	bool ok = true;
	string p = "prime";
	string c = "composite";

	for(int i = 2; i < sqrt(x); i++){
		if(x%i == 0){
			ok = false;
		}
	}
	if (ok == true){
		return p
	}
	else 
		return c;
}

int main(){
	int a;
	cin >> a;
	cout << f(a);

	return 0;
}