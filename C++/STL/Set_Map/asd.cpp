#include <iostream>
#include <string>
#include <sstream>
#include <map>
#include <vector>
#include <set>
 

using namespace std;

int main()
{
    string str;
    getline(cin, str);
    istringstream ist(str);
    map<string, int > m;
    for (string word; ist >> word; m[word]++);
    
    int mx = 0;
    string s = "";
    string result;
    int result_size = s.size();
    string max;
    vector<string> v;
    for(map<string,int>::iterator it = m.begin(); it != m.end(); it++){
    	if(mx < (*it).second){
    		mx = (*it).second;
    	}
    }

    for(map<string,int>::iterator it = m.begin(); it != m.end(); it++){
    	if(mx == (*it).second){
    		v.push_back((*it).first);
    	}
    }

    for(int i = 0; i<v.size(); i++){
    	if(v[i].size() > result_size){
    		result_size = v[i].size();
    	}
    }

    for(int i = 0; i < v.size(); i++){
    	if(result_size == v[i].size()){
    		max = v[i];
    	}
    }

    cout << max ;
}