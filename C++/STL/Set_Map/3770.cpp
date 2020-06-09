#include <iostream>
#include <map>
#include <sstream>
#include <algorithm>
#include <vector>
#include <set>

// #define ll long long

using namespace std;

struct statistics{
	string name;
	long long votes;
};

bool f(statistics a, statistics b){
	if(a.votes > b.votes) return true;
	if(a.votes == b.votes && a.name < b.name) return true;
	return false;
}


int main(){

	freopen("input.txt","r",stdin);

	long long n,votes_cnt;
	cin >> n;
	map<string, long long> states;
	map<string, long long> raw_statistics;

	map<string, map<string,long long> > votes;
	string state;
	string candidate;
	vector<statistics> v;

	for(long long i = 0; i < n; ++i){
		cin >> state >> votes_cnt;
		states[state] = votes_cnt;
	}

	while(cin >> state >> candidate){
		votes[state][candidate]++;
		raw_statistics[candidate] = 0;
	}

	map<string, map<string, long long> >::iterator i;
	map<string,long long> :: iterator j;

	for(i = votes.begin(); i != votes.end(); ++i){
		map<string, long long> m = (*i).second;
		string winner;
		long long winner_votes_cnt = 0;
		/*
		Сначала проводятся выборы в каждом штате и 
		определяется победитель выборов в данном штате.
		*/
		for(j = m.begin(); j != m.end(); ++j){
			if(winner_votes_cnt < (*j).second){
				winner_votes_cnt = (*j).second;
				winner = (*j).first;
			}
		}
		/*
		все выборщики от штата голосуют 
		в соответствии с результами голосования внутри штата
		*/
		raw_statistics[winner] += states[(*i).first];
	}

	for(j = raw_statistics.begin(); j != raw_statistics.end(); ++j){
		statistics item;
		item.name = (*j).first;
		item.votes = (*j).second;
		v.push_back(item);
	}

	sort(v.begin(),v.end(),f);

	/*for(ll k = 0; k < v.size() - 1; ++k){
		for(ll d = k + 1; d < v.size(); ++d){
			if(v[k].votes < v[d].votes){
				swap(v[k],v[d]);
			}else if(v[k].votes == v[d].votes && v[k].name > v[d].name){
				swap(v[k],v[d]);
			}
		}
	}*/

	for(long long k = 0; k < v.size(); ++k){
		cout << v[k].name << " " << v[k].votes << endl;
	}


	return 0;
}