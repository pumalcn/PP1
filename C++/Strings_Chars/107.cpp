#include <iostream>
#include <string>
#include <sstream>

using namespace std;


int main(){
	freopen("input.txt", "r", stdin);
	string str;
	getline(cin, str);
	str = str + " ";

	int k = 0;
	int mx = 0;
	int mk = 0;


	for(int i = 0; i< str.size(); i++){
		if(str[i] == " "){
			int len = str.subsrt(k, i - k).size()
			if(len > mx){
				mx = len
				mk = k;
			}
			k = i + 1;
		}
	}

	cout << str.subsrt(mk,mx) << endl;
	cout << mx << endl;
	return 0;
}