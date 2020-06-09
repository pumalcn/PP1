#include <iostream>
#include <vector>
#include <string>
#include <cmath>

using namespace std;

bool isDigit(char c){
	if(c <= '9' && c >= '0') return true;
	return false;
}

int f(string s){
	int temp = 0;
	for(int i = 0; i < s.size(); i++){
		if(isDigit(s[i])){
			// temp = 0; s[i]= '1';
			// temp = 1; s[i] = '4';
			// temp = 14; s[i] = '4';
			temp = temp * 10 + int(s[i] - 48);
			//temp = 0 * 10 + int(49 - 48) = 0 + 1 = 1;
			//temp = 10 + int(52 - 48) = 10 + 4 = 14;
			//temp = 140 + int(52 - 58) = 140 + 4 = 144
		}
	}

	return int(sqrt(temp));
}
int main(){
	string str;

	getline(cin,str);
	cout << f(str) << endl;



	return 0;
}