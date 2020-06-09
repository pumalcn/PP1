#include <iostream>
#include <string>

using namespace std;

int main(){
	string s;
	cin >> s;
	bool ok = true;
	int l = s.length();
	for(int i = 0; i < l/2; ++i){
		if(s[i] != s[l - i - 1]){
			ok = false;
			break;
		}
	}
	if(ok){
		cout << "yes";
	}
	else {
		cout << "no";	
	}
	return 0;
}