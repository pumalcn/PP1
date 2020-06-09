#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 1; i <=n; i++){
    	cin >> a[i];
    }

    int mx = -1000;
    int index = 0;
    for(int i = 1; i <=n; i++){
    	if(a[i] > mx){
            mx = a[i];
    		index = i;
        }
    }
    cout << index;
	return 0;
}