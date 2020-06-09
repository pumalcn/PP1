#include <iostream>
using namespace std;
int main(){
	freopen("input.txt","r",stdin);
	int n;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; ++i){
		cin >> a[i];
	}
    bool found = false;
	for(int i = 1; i < n; ++i){
		if(a[i] * a[i-1]>0){
			found = true;
			cout << "YES";
			break;
		}
	}
	
	if(found==false) cout << "NO";
	
	cout << endl;
	return 0;
}