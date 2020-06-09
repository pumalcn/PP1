#include <iostream>
using namespace std;
 int main()
 {
 	int n;
 	cin >> n;
 	int a[n];
 	for (int i = 0; i<n; i++){
 		cin >> a[i];
 }
 	int k = 0 ;
 		for (int i = 0; i<n; i++){
            if (a[i]>0){
 				k++;
            }
 	
 }
 		cout << k << endl;
 	
 	return 0;
}