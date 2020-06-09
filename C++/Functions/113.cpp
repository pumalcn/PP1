#include <iostream>

using namespace std;

int result;
bool can(int n){
	if(n < 0) return false;

	else if (n == 0) return true;
	else return (can(n-3) || can(n -5)); 
}


int main(){
	int n;
	cin >> n;
	if(can(n-1)){
		cout << "YES";
	}

	else 
		cout << "NO";

	return 0;
}