//IP-address

#include <iostream>
#include <sstream>
#include <cmath>


using namespace std;


int main(){
	string line;
	getline(cin, line);
	line = line + '.';
	

	int k = 0;
	int n = line.size();

	bool ok = true;

	for(int i = 0; i < n; i++){
		//127.0.0.1
		//012345678
		if(line[i] == '.'){
			string t = line.substr(k,i - k);
			if(t.size() == 0){
				ok = false;
				break;
			}else{
				stringstream ss;
				int y;
				ss << t;
				ss>>y;
				if(y > 255){
					ok = false;
					break;
				}
			}
			k = i + 1;
		}
	}

	cout << ok << endl;
	return 0;
}