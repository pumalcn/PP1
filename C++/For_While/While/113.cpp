#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int n;
	int x = 1;
	cin >> n;

	while(x<=n){
		if(int(sqrt(x))*int(sqrt(x)) == x)
			cout << x  << ' ';
		x++;

	}

	return 0;
}