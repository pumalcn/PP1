#include <iostream>
#include <cmath>

using namespace std;

long long binominal(int n, int k){
	if(k == 0 || k == n) return 1;
	return binominal(n-1,k-1)+binominal(n-1,k);
}

int main(){
	int a, b;
	cin >> a >> b;
	cout << binominal(a, b);

	return 0;
}