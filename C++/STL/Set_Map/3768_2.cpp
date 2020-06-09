#include <iostream>
#include <sstream>
#include <map>
#include <set>
#include <string>
#include <algorithm>


string lower(string str){
	for(int i = 0; i < str.size(); i++){
		if(str[i] >= 'A' && str[i] <= 'Z'){
			str[i] = char(str[i] + 32);
		}
	}
	return str;
}



int main(){
	int n;
	string str;
	map<string,set<string> m;
	map<string,set<string>::iterator it;
	set<string>:: iterator t2;


	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> str;
		m[lower(str)].insert(str);
	}

	int error = 0;
	while(cin >> str){
		set<string> s = m[lower(str)];
		if(s.size() == 0){
			int cnt = 0;
			for(int i = 0; i < str.size(); i++){
				if(str[i] >= 'A' && str[i] <= 'Z'){
					cnt++;
				}
			}

			if(cnt != 1){
				error++;
			}
		}else{
			if(s.find(str) == s.end()){
				error++;
			}
			
		}
	}

	cout << error << endl;
	return 0;
	
}