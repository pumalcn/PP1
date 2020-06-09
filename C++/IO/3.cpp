#include <iostream>
#include <cmath>

using namespace std;

int main(){

	int a;
	int b;
	cin >> a >> b;

	double c = sqrt(a * a + b * b);

	printf("%.10f\n", c);

	return 0;
}