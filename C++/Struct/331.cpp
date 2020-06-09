#include <iostream>
#include <algorithm>

using namespace std;



struct student 
{
	string sname;
	string name;
	int x,y,z;
	double avr;
	void printInfo(){
		cout << sname << " " << name << endl;
	}

};
vector<student> v;
vector<int> avrs;

bool acompare(point a, point b){
	if( a.avr > b.avr) return true;
	return false;

}

int main(){
	int n;
	cin >> n;
	

	for(int i = 0; i < n; i++){
		student t;
		cin >> t.sname >> t.name >> t.x >> t.y >> t.z;
		t.avr = t.x + t.y + t.z;
		v.push_back(t);


		bool found = false;
		for(int j = 0; j <avrs.size(); j++){
			if(avrs[j] == t.avr){
				found = true;
				break;
			}
		}
		if(!found){
			avrs.push_back(t.avr);
		}
	}
	sort(avrs.rbegin(),avrs.rend());
	for(int j = 0; j < avrs.size(); j++){
		for(int i = 0; i < v.size(); i++){
			if(avrs[j] == v[i].avr)
				v[i].printInfo();
		}
	}

	return 0;
}