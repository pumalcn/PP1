#include <iostream>
#include <string>
using namespace std;

int main(){
	string s;
	cin >> s;
	int len = s.length();
	int k = 0;
	bool found = false;

	for(int i = 0; i < len; i++){
		for(int j = i + 1; j < len; j++){
			if(s[i] == s[j]){
				found = true;
				cout << s[i] << endl;
				break;
			}
		}
		if(found){
			break;
		}
	}
	return 0;
}