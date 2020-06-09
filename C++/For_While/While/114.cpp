#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int n;
	cin >> n;
	int i = 2,min_den = 1;
	int sqrt_n = sqrt((double)n);
	while(i<=sqrt_n){
		if(n % i == 0){
			min_den = i;
			break;
		}

		i++;
	}
	
	if(min_den == 1){
		cout << n;
	}
	else{
		cout << min_den;
	}
	return 0;
}