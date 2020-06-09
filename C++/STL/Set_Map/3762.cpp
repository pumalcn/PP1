#include <iostream>
#include <string>
#include <map>
#include <algorithm>

using namespace std;


int main(){

	string str;
    getline(cin, str);
    istringstream ist(str);
    map<string, int > m;
    for (string word; ist >> word; m[word]++);
    
	int mx = 0;
	string max;

	for(map<string,int>::iterator it = m.begin(); it!= m.end(); it++){
		if(it->second > mx){
			max = it->first;
		}
	}

	cout << max;


	return 0;
}

