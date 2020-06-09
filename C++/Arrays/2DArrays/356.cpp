#include <iostream>
using namespace std;
 int main(){
 	freopen("input.txt","r",stdin);

 	int n,m;
 	cin >> n >> m;
 	int a[n][m];
 	int sum[n];

 	int ms = -1;
 	int ns = -1;

 	for(int i=0; i<n; i++){
        sum[i]=0;

 	 	for (int j=0; j<m; j++){
 	 		cin >>a[i][j];
 	 		sum[i] += a[i][j];
 	 	}

 	 	if(ms < sum[i]){
 	 		ns = i;
 	 		ms = sum[i];
 	 	}
 	}

 	cout << ms << " " << ns;

 	return 0;
 }