#include <map>
#include <vector>
#include <set>
#include <iostream>
#include <climits>
#include <sstream>
#include <stdlib.h>

using namespace std;

//c - символ, который нужно заменить
//t - символ, на который нужно заменить
//s - слово, которое следует обработать и вернуть
string replace(char c, char t, string s){
	for(int i = 0; i < s.size(); ++i){
		if(s[i] == c){
			s[i] = t;
		}
	}
	return s;
}

vector<string> split(string s){
	vector<string> res;

	s = replace(',',' ',s);
	s = replace('-',' ',s);

	stringstream ss;
	ss << s;

	while(ss >> s){
		res.push_back(s);
	}

	return res;
}


int main(){

	map<string,set<string>> voc;

	string s;
	getline(cin,s);
	int n = atoi(s.c_str());

	for(int i = 0; i < n; ++i){
		getline(cin,s);
		vector<string> words = split(s);
		for(int i = 1; i < words.size(); ++i){
			voc[words[i]].insert(words[0]);
		}
	}

	cout << voc.size() << endl;

	map<string,set<string> > :: iterator it;
	set<string>::iterator it2;

	for(it = voc.begin(); it != voc.end(); ++it){
		string key = (*it).first;
		set<string> values = (*it).second;
		string val = "";

		for(it2 = values.begin(); it2 != values.end(); ++it2){
			val += *it2 +  ", ";
		}

		val[val.size() - 2] = ' ';

		cout << key << " - " << val << endl;

	}

	return 0;
}