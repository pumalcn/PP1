#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	
	int n,k,x;

	cin >> n >> k;

	for(int i = 0; i < n; ++i){
		cin >> x;
		if(i + 1 != k) cout << x << " ";
	}

	return 0;
}