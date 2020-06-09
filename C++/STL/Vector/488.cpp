#include <iostream>
#include <vector>

int isPrime(int n){
	for(int i = 2; i <= sqrt(n); i++){
		if(n%i==0){
			return false;
			break;
		}
		
	}
	return true;
}

using namespace std;


int main(){
	int n;
	cin >> n;
	vector <int> a;
	for(int i = 2; i <=n; i++){
		a.push_back();
	}

	for(vector<int>::iterator it = a.begin(); it != a.end(); ++it){
 		if(true == isPrime(*it)){
 			cout << *it << " ";
 		}
 	}


}