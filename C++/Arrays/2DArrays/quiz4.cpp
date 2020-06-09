#include <iostream>

using namespace std;

int main(){
	
	string s;
	cin >> s;

	int k = 0;

	char c[] = {'a','e','u','i','o'};

	for(int i = 0; i < s.length(); ++i){
		for(int j = 0; j < 5; ++j){
			if(s[i] == c[j]){
				k++;
			}
		}
	}

	cout << k;

	return 0;
}