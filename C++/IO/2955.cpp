#include <iostream>

using namespace std;

int main(){

	int h,a,b;

	cin >> h >> a >> b;


	h -= a;
	int k = 1;

	while(h > 0){
		h += b;
		h -= a;
		k++;
	}


	cout << k << endl;


	

	return 0;	
}