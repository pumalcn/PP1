#include <iostream>
#include <algorithm>

using namespace std;

struct student{
	string surname;
	string name;
	double gpa;
	int course;
};


int main(){

	int n;
	cin >> n;
	student s[n];
	for(int i = 0;i < n; i++){
		cin >> s[i].surname >> s[i].name >> s[i].gpa >> s[i].course;
	}
	for(int i = 0; i < n - 1;i++){
		for(int j = i + 1; j < n; j++){
			bool a = (s[i].course > s[j].course);
			bool b = (s[i].course == s[j].course);
			bool c = (s[i].gpa > s[j].gpa);
			if(a || (b && c)){
				swap(s[i],s[j]);
			}
		}
	}

	for(int i = 0; i < n; ++i){
		cout << s[i].surname << " " << s[i].name << " " <<  s[i].gpa  << " " <<  s[i].course << endl;
	}
	return 0;
}