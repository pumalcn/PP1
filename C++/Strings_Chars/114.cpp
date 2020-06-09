#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <stdio.h>
#include <sstream>

using namespace std;

int main(){
	string s;
	getline(cin,s);

	int a,b;
	cin >> a >> b;
	a--;
	b--;
	cout << s.substr(0,a);//1 

	int n = b-a+1;
	char t[n];
	s.copy(t,n,a);
	t[n] = '\0';

	reverse(t,t + n);
	
	cout << t;//2
	
	cout << s.substr(b+1);//3

	return 0;
}