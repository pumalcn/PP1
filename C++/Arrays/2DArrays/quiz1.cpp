#include <iostream>

using namespace std;

int main(){
	
	int n;

	cin >> n;

	if(n == 1) cout << "NO";
	else{

		int k = 0;

		for(int i = 1; i <= n; ++i){
			if(n % i == 0){
				k++;
			}
		}

		if(k > 2){
			cout << "NO";
		}else{
			cout << "YES";
		}
	}

	return 0;
}