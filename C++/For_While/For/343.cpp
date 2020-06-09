#include <iostream>


using namespace std;


int main()
{
	int n;
	cin >> n;
	int k;
	bool check = false;
	for(int i = 0; i < n; i++){
		cin >> k;
		if(k == 0){
			check = true;
		}

	}

	if(check){
		cout << "YES";
	}
	else cout << "NO";
	
	return 0;
}