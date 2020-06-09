#include<iostream>
using namespace std;

int main(){
	int a, i = 2, f1 = 0, f2 = 1,cur;
	cin >> a;
	while(cur < a){
		cur = f1 + f2;
		f1 = f2;
		f2 = cur;
		i++;
	}
	if(cur == a){
		cout << i;
	}
	else 
		cout << -1;
	return 0;
}