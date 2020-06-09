#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int p,x,y;
	cin >> p >> x >> y;
	double r = p/100.0;
	double t = x * r + y;
	int A = t + t*r;
	cout << A/100 << " " << A%100;
	return 0;
}