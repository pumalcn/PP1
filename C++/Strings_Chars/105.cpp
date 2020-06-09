#include<iostream>
#include<string>
using namespace std;


int main(){
	string s1;
	string s2;
	cin >> s1 >> s2;
	bool equal = false;

	if(s1==s2){
		equal = true;
		cout << "yes";
	}
	else 
		cout << "no";
	return 0;
}