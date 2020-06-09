#include <iostream>
#include <string>
using namespace std;

int cnt = 0;
void isdigit(char c){
	if(c >= '0' && c <= '9')
		cnt++;
}


int main(){

	string s;
	cin >> s;

	for(int i = 0; i < s.size();i++){
		isdigit(s[i]);
	}

	cout << cnt;

	return 0;
}