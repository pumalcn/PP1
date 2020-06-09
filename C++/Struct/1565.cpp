#include <iostream>
 
using namespace std;
 
void shift(int n,int *x){
    for(int i = n - 1; i >= 0; i--){
        *(x + i) = *(x + i - 1);
    }
}
int main()
{
    int n, t;
    cin >> n;
    int *a = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> *(a+i);
    }
    
    t = a[n-1];
    // for (int i = n - 1; i >= 0; i--)
    // {
    //     a[i] = a[i-1];
    // }
    shift(n,a);
    a[0] = t;
    for (int i = 0; i < n; i++)
    {
        cout << *(a + i) << " ";
    }
    cout << endl;
    return 0;
}