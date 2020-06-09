#include <iostream>
using namespace std;

char to_lower(char c){
	if(c <= 'Z' && c >= 'A') return (c + 32);
	return c;
}

int f(string s, char c){
	int res = 0;

	for(int i = 0; i < s.size(); i++){
		if(to_lower(s[i]) == c){
			res++;
		}
	}

	return res;
}


int main(){
	string str;

	char c;
	getline(cin,str);
	cin >> c;
	cout << f(str,c) << endl;
	return 0;
}