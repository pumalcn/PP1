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

    for(int x = 0; x < n - 1; x = x + 2){
        swap(a[x],a[x+1]);
    }
 
    for(int i = 0; i < n; ++i){
        cout << a[i] << " ";
    }


    return 0;
}