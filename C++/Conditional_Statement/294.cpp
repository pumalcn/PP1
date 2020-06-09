#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int a,b;
	cin>>a>>b;
	if(a == 1 && b == 1)
		cout << "YES"<<endl;
	else if (a != 1 && b != 1)
			cout << "YES"<<endl;
	else if (a != 1 && b == 1)
			cout << "NO"<<endl;
	else 
			cout << "NO";
	

  	return 0;
  	}