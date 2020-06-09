#include <iostream>
using namespace std;
 int main (){
 	int n; 
 	cin >> n;
 	int a[n];
 	for(int i = 1;i < n;i++){
 		cin >> a[i];
 	}
 	/*10 2 3 1 5 */
 	int min1 = min(a[1],a[2]); //2
 	int min2 = max(a[1],a[2]);//10
 	for(int i = 3;i < n;i++){
 		if (a[i]<min1){
 			min2=min1; min1=a[i]; // min2=2 min1=1
 		}
 		if(a[i]<min2 and a[i]>min1){
 			min2=a[i];
 		}
 	} 
 	cout << min1 << ' ' << min2;
 	return 0;
 }