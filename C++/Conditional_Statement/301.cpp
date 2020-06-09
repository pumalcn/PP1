#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int a,b,x;
	cin>>a>>b;
	if(a==0) {
		if(b==0) {
			cout<<"INF"<<endl;
			return 0;
		}
		else {
			cout<<"NO"<<endl;
			return 0;

		}
	}
	else {
		if(b % a == 0){
			cout<< -(b/a)<<endl;
			return 0;

		}
		else {
			cout<<"NO"<<endl;
			return 0;
		}
	}

  	return 0;	
}