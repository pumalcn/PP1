#include <iostream>
using namespace std;
 int main(){
    int n , x , k = 0;
    cin >> n;
    for (int i = 1; i <= n ; i++)
    {
        cin >> x;
        if (x == 0)
            k++;
    }

    cout << k;
    return 0;
}