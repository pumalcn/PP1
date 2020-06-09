#include <iostream>
using namespace std;
 int main(){
 	freopen("input.txt","r",stdin);

 	int n,m;
 	cin >> n >> m;
 	int a[n][m];
    int bestScore=-1;
    int indi,indj;


 	for(int i=0; i<n; i++){
 	 	for (int j=0; j<m; j++){
 	 		cin >>a[i][j];
 	 	    if(bestScore < a[i][j]){
 	 	    	bestScore = a[i][j];
 	 	    	indi = i;
 	 	    	indj = j;
 	 	    }
 	 	}
 	}

 	cout << bestScore << endl;
 	cout << indi << " " << indj;


 	return 0;
 }