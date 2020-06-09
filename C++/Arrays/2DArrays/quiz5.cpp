#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	
	string s;

	cin >> s;

	bool ok = true;

	int n = s.length();

	for(int i = 0; i < n/2; ++i){
		//cout << s[i] << " " << s[n-1-i] << endl;
		if(s[i] != s[n - 1 - i]){
			ok = false;
			break;
		}
	}
	
	if(ok){
		cout << "YES";
	}else{
		cout << "NO";
	}

	return 0;
}