#include <iostream>
#include <set>



using namespace std;


int main(){


	int days,communities;
	cin >> days >> communities;
	int a,b;
	set<int> guess_party;
	set<int> party;


	for(int i = 0; i < communities; i++){
		cin >> a >> b;
		while(a <= days){
			party.insert(a);
			a+=b;
		}

	}

	for(int i = 1; i < days; i++){
		if(i % 7 == 0 || (i + 1) % 7 == 0){
			continue;
		}
		guess_party.insert(i);
	}
	set<int>::iterator it;
	

	for(it = guess_party.begin(); it != guess_party.end(); it++){
		if(party.find(*it) != party.end()){
			cnt++;
		}
	}

	cout << cnt;

	return 0;
}