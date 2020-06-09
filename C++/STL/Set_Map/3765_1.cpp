#include <map>
#include <iostream>
#include <sstream>
#include <vector>
#include <stdlib.h>


using namespace std;


int main(){

	string str, city_name, country_name;
	getline(cin,str);
	int n = atoi(str.c_str());
	map<string,string> a;

	for(int i = 0; i < n; i++){
		stringstream ss;
		getline(cin,str);
		ss << str;
		ss >> country_name;
		while(ss >> city_name){
			a[city_name] = country_name;
		}

	}

	getline(cin,str);
	int m = atoi(str.c_str());

	for(int i = 0; i < m; i++){
		getline(cin,city_name);
		cout << a[city_name] << endl;
	}
	return 0;
}