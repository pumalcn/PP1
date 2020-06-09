#include<iostream>
using namespace std;

int main(){
	int a,b,c;
	cin>>a>>b>>c;
	int max = a;

	if(b>max){
		max = b;
	}

	if(c>max){
		max = c;
	}
/*
	if(a > b){
		if(a > c){
			cout << a;
		}
		else {
			cout << c;
		}
	}
	else {
		if(b > c){
			cout << b;
		}
		else {
			cout << c;
		}
	}
*/
	cout << max << endl;
	return 0;
}