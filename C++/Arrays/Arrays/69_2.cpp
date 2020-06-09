#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main(){
	freopen("input.txt","r",stdin);

	int n;
	cin >> n;
	int a[n];

	for(int i = 0; i < n; ++i){
		cin >> a[i];
	}

	for(int i = 0; i < n/2; ++i){
		//swap(a[i],a[n-1-i]);
		int t = a[i];
		a[i] = a[n-1-i];
		a[n-1-i] = t;

		/*a = 12,b = 13;
		a = a + b;//25
		b = a - b;//12
		a = a - b;//13
		a[i] = a[i] + a[n-1-i];
		a[n-1-i] = a[i] - a[n-1-i];
		a[i] = a[i] - a[n-1-i];*/
	}

	for(int i = 0; i < n; ++i){
		cout << a[i] << " ";
	}
	return 0;
}

/*

A B C D E

0 1 2 3 4



0 <-> 5 - 1 - 0/4

1 <-> n - 1 - 1/3

2 <-> n - 1 - 2

*/