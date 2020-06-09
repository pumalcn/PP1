#include <iostream>
#include <string>
using namespace std;

int main(){
	string s1;
	string s2;
	getline(cin,s1);
	getline(cin,s2);
	int k = -1;
	k = s2.find(s1);
	if(k != -1){
		cout << "yes";
	}
	else 
		cout << "no";
	

	return 0;
}