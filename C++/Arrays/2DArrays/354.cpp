#include <iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	int a[n][n];

	for(int i = 0; i < n; ++i){

		for(int j = 0; j < n; ++j){

			if(j == n - 1 - i) a[i][j] = 1;

			else if(i + j < n) a[i][j] = 0;

			else a[i][j] = 2;
		}
	}

	for(int i = 0; i < n; ++i){

		for(int j = 0; j < n; ++j){

			cout << a[i][j] << "\t";

		cout << endl;
	}
	return 0;

}