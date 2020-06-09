#include <map>
#include <iostream>
#include <sstream>
#include <vector>
#include <stdlib.h>


using namespace std;

vector<string> split(string line){
	vector<string> res;
	string x;
	stringstream ss;
	ss << line;

	while(ss >> x){
		res.push_back(x);
	}

	return res;
}

int main(){


	string line;
	getline(cin,line);
	int n = atoi(line.c_str());

	map<string, string> m;

	for(int i = 0; i < n; ++i){
		getline(cin,line);
		vector<string> t = split(line);
		for(int j = 1; j < t.size(); ++j){
			//pair<string, string> p = make_pair(t[i],t[0]);
			//m.insert(p);
			m[t[j]] = t[0];
		}
	}

	/*map<string,string>::iterator it;
	for(it = m.begin(); it != m.end(); ++it){
		cout << (*it).first << " " << (*it).second << endl;
	}*/

	int k;
	cin >> k;

	string city;
	vector<string>v;

	for(int i = 0; i < k; ++i){
		cin >> city;
		v.push_back(city);
	}

	for(vector<string>::iterator it = v.begin(); it != v.end(); it++){
		cout << m[*it] << endl;
	}


	return 0;
}