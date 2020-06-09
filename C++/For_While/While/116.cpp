#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int bitAmount = 0;
    while(n){
    	bitAmount += n % 2;
    	n /= 2;
    }
    if(bitAmount == 1)
    	cout << "YES";
    else 
    	cout << "NO";
	return 0;
}