#include <iostream>
#include <map>
#include <string>
#include <sstream>
#include <vector>
#include <set>


//#define ll long long;

using namespace std;


int main(){

	freopen("input.txt","r",stdin);

	string sname,item;
	long long count;
	map<string,map<string,long long> > m;
	map<string,map<string,long long> >::iterator i;
	map<string,long long>::iterator j;
	map<string,long long> p;

	while(cin >> sname >> item >> count){
		m[sname][item]+= count;
	}


	for(i = m.begin(); i != m.end(); i++){
		cout << (*i).first << ":" << endl;
		p = (*i).second;
		for(j = p.begin(); j != p.end(); j++){
			cout << (*j).first << " " << (*j).second << endl;
		}
	}

	return 0;
}