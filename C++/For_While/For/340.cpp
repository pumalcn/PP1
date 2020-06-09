#include <iostream>
using namespace std;
 int main(){
 	int N,k;
 	cin >> N;
 	int sum=0;
 	for(int i=1;i<=N;i++){
 		cin >> k;
 		sum=sum+k;
 	}
 	cout << sum << endl;

 	return 0;
 }