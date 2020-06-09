#include <iostream>

using namespace std;

int main(){
	int n;
	cin >> n;
	int zero_cnt = 0;
	int plus_cnt = 0;
	int minus_cnt = 0;
	int k;

	for(int i = 0; i < n; i++){
		cin >> k;
		if(k == 0){
			zero_cnt++;
		}
		else if(k > 0){
			plus_cnt++;
		}
		else{
			minus_cnt++;
		}
	}

	cout << zero_cnt << " " << plus_cnt << " " << minus_cnt;

	return 0;
}