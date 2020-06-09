#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <stdio.h>
#include <sstream>

using namespace std;

int main(){
    string s;
    getline(cin, s);
    int l = s.length();
    bool ok = true;
    for (int i = 0; i < l; ++i){
        if(s[i] == ' '){
            s = s.erase(i,1);


            if (s[i] != s[l - 1 - i]){
                ok = false;
                break;
            }
        }
    }
    if(ok){
        cout << "yes";
    }else{
        cout << "no";
    }
    return 0;
}
