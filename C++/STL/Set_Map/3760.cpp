#include <iostream>
#include <map>
#include <string>


using namespace std;


int main(){
	int n;
	cin >> n;
	string a,b,c;

	map<string,string> m1,m2;
	map<string,string>::iterator it;

	for(int i = 0; i < n; i++){
		cin >> a >> b;
		m1[a] = b;
		m2[b] = a;
	}
	cin >> c;
	for(it = m1.begin(); it!= m1.end(); it++){
		string key = (*it).first;
		if(key == c){
			cout << m1[key];
		}
	}
	for(it = m2.begin(); it!= m2.end(); it++){
		string key = (*it).first;
		if(key == c){
			cout << m2[key];
		}
	}

	return 0;
}