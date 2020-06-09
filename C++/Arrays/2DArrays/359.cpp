#include <iostream>
using namespace std;
 int main(){
 	freopen("input.txt","r",stdin);

 	int n,m;
 	cin >> n >> m;
 	int a[n][m];
 	int mx[n];
 	int bestScore=-1;
    int k=0;

 	for(int i=0; i<n; i++){
        mx[i]=-1;

 	 	for (int j=0; j<m; j++){
 	 		cin >>a[i][j];
 	 		mx[i] = max(mx[i],a[i][j]);
 	 		if(bestScore<mx[i]){
 	 			bestScore = mx[i];
 	 		}
 	 	}
 	}

 	for(int i = 0; i < n; ++i){
 		if(mx[i] == bestScore){
 			k++;
 		}
 	}

 	cout << k ;

 	return 0;
 }