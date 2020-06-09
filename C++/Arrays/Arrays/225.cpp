#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
    	cin >> a[i];
    }
    
    int k;
    cin >> k;
    int res;
    int mx = 3000;
    for(int i = 0; i < n; i++){
    	if(a[i] == k){
    		res = k;	
    		break;
    	}
    	else if(abs(a[i] - k) < mx){
    		mx = abs(a[i] - k);
    		res = a[i];
    	}
    }

    cout << res;
	return 0;
    	}