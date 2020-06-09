#include <iostream>

using namespace std;

int main(){

	int n;
	int a[n];
	cin >> n;

	for(int i = 0; i < n; i++){
		cin >> a[i];
	}

	int k;
	int cnt = 0;
	cin  >> k;

	for(int i = 0; i < n; i++){
		if(k == a[i]){
			cnt++;
		}
	}
	cout << cnt;
	return 0;
}