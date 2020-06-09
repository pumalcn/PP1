#include <iostream>

using namespace std;

int main(){

	freopen("input.txt","r",stdin);

	int n;
	cin >> n;

	int a[n];
	bool b[n];
	int k = 0;

	for(int i = 0; i < n; ++i){
		cin >> a[i];
		b[i] = true;
	}

	int t = 0;
	int i = 0;
	int j = 1;
	int l = 0;

	int c[n];

	while(true){

		while(a[i] == a[j]){
			while(!b[j]){
				j++;
			}
			t++;
			c[l++] = j; 
		}
		i = i + 1;
		j = i + 1;

		if(t >= 2){
			k+=t;
			b[i] = false;

			for(int p = 0; p <=l; ++p){
				b[c[p]] = false;
			}

			l = 0;
		}
	}


	cout << k << endl;

	return 0;
}