#include <iostream>
#include <string>
using namespace std;
string f(string s)
{
    for(int i = 1; i < s.size(); i++){
        if ( i % 2 == 1)
            s.insert(i,"*");
    }

    return s;
}
int main()
{   
    string s;
    getline( cin, s);
    
    cout << f(s); 
    return 0;
}