#include <iostream>
#include <string>
using namespace std;


int main(){
	string s;
	getline(cin,s);
	int k = 0;

	for(int i = 0; i < s.length();i++){
		if(s[i] == ' '){
			k++;
		}
	}
	k = k + 1;
	cout << k;


	return 0;
}