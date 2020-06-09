#include <iostream>

using namespace std;

struct student{
	string surname;
	string name;
	double gpa;
	int course;
};

bool f(student x, student y){
	if(x.course < y.course) return true;
	if(x.course == y.course && x.gpa < y.gpa) return true;
	return false;
}

bool f2(student x, student y){
	if(x.name > y.name) return true;
	return false;
}

int main(){

	freopen("input.txt","r",stdin);
	int n;
	cin >> n;
	student s[n];

	for(int i = 0; i < n; ++i){
		cin >> s[i].surname >> s[i].name >> s[i].gpa >> s[i].course;
	}

	sort(s,s+n,f2);

	for(int i = 0; i < n; ++i){
		cout << s[i].surname << " " << s[i].name << " " <<  s[i].gpa  << " " <<  s[i].course << endl;
	}

	return 0;
}