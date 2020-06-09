#include <iostream>

#include <cmath>


using namespace std;


int main(){
	int n,k;

	int a[n];
	int b[n];
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}

	cin >> k;
	k = k%n;

	for(int i = 0; i < n; i++){
		int h = i - k;
		if(h > n - 1){
			h -= n;
		}
		else if(h < 0){
			h+= n;
		}
		b[i] = a[h];
	}
	for(int i = 0; i < n; i++){
		cout << b[i] << " ";
	}
	return 0;
}

/*k = 3
n = 4
A B C D 
0 1 2 3
B C	D A
[3] -> [0]
[2] -> [2-3] = [-1] = [-1+4]= [3]
[1] -> [1-3] = [-2] = [-2+4] = [2]
[0] -> [0-3] = [-3] = [-3+4] = [1]*/



/*k = -3
n = 4
A B C D 
0 1 2 3
[0] <- [0+3]=[3]
[1] <- [1+3]=[4-4]=[0]
[2] <- [2+3]=[5-4]=[1]
[3] <- [3+3] = [6-4]=[2]*/