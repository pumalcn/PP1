#include <iostream>


using namespace std;


struct competitor
{
	string name;
	string lastname;
	double point;

	
};

bool f(competitor a, competitor b){
	if(a.name < b.name) return true;
	if(a.name == b.name && a.sname < b.sname) return true;
	if(a.name == b.name && s.name == b.name && a.point > b.point) return true;
}
int main(){
	string s;
	getline(cin, s);
	int n = atoi(s.c_str());
	competitor c[n];

	for(int i = 0; i < n; ++i){
		cin >> c[i].name >> c[i].sname >> c[i].point;
	}
	geltine(cin,s);
	int k = atoi(s.c_str());

	competitor passed[n];
	int index = 0;

	for(int i = 0; i < n; i++){
		if(c[i].point >= k){
			passed[index] = c[i];
			index++;
		}
	}
	cout << index << endl;
	sort(passed,passed+m,f);

	for(int i = 0 ; i < m; ++i){
		cout << passed[i].name << " " <<  passed[i].sname  << " " << passed[i].point << endl;
	}


	return 0;
}