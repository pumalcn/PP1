#include <iostream>
#include <map>
#include <sstream>
#include <vector>
#include <set>

using namespace std;


string lower(string str){
	for(int i = 0; i < str.size(); ++i){
		if(str[i] >='A' && str[i]<='Z'){
			str[i] = char(str[i]+32);
		}
	}
	return str;
}

int main(){

	int n;
	cin >> n;
	string str;
	set<string> s,l;

	for(int i = 0; i < n; ++i){
		cin >> str;
		s.insert(str);
		l.insert(lower(str));
	}

	int error = 0;

	while(cin >> str){
		if(s.find(str) == s.end() ){
			if(l.find(lower(str)) != l.end()){
				error++;
			}else{
				int cnt = 0;
				for(int i = 0; i < str.size(); ++i){
					if(str[i] >= 'A' && str[i] <='Z'){
						cnt++;
					}
				}
				if(cnt != 1){
					error++;
				}
			}
		}
	}

	cout << error << endl;

	return 0;
}