#include <iostream>
#include <string>
using namespace std;
 
int main() {
   int k=0;
   string s;
   getline(cin, s, '\n');
   for(int i = 0 ; i<s.length(); i++){
	   if(s[i]==' ' && s[i+1] == ' ') {
           s.erase(i + 1, 1);
           i--;
       }
   }
   cout<<s;
   return 0;
}