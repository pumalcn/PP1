#include <iostream>
#include <sstream>
#include <algorithm>
#include <vector>
#include <set>
#include <stdlib.h>



using namespace std;


struct number{
	int value;
	int cnt;
	bool operator =(number x){
		if(x.value == value) return true;
		return false;
	}

};

struct comp{
	bool operator()(number a, number b){
		if(a.value < b.value) return true;
		return false;
	}
};


vector<number> split(string s){
	vector<number> res;
	stringstream ss;
	ss << s;
	int x;
	while(ss >> x){
		number = t;
		t.cnt = 1;
		t.value = x;
		res.push_back(t);
	}

	return res;

}


int main(){
	string line,nums_line, ans_line;
	getline(cin,line);
	int n = atoi(line.c_str());
	int mt = 0;

	set <number,comp> nums;
	set <number, comp>:: iterator it;

	for(size_t i = 1; i <= n; i++){
		number t; 
		t.value = i; 
		t.cnt = 0;
		nums.insert(t);
	}// value : 1 2 3 4 5 6 7 8 9 10 
	 // cnt : 0 0 0 0 0 0 0 0 0 0

	 while(1){
	 	getline(cin, nums_line);
	 	if(nums_line == "HELP") break;

	 	vector<int> arr = split(nums_line);

	 	getline(cin, ans_line);

	 	if(ans_line =="YES"){
	 		for(int i = 0; i < arr.size(); i++){//value : 1 2 3 4 5;
	 			it = nums.find(arr[i]);         // cnt : 1 1 1 1 1
	 			number t;
	 			if(it != nums.end()){
	 				t.cnt = (*it).cnt + 1;// 1 2 3 4 5 6 7 8 9 10 
	 				nums.erase(it);      // 1 1 1 1 1 0 0 0 0 0 
	 			}else{
	 				t.cnt = 1;
	 			} 
	 			t.value = arr[i].value;
	 			nums.insert(t);
	 			mt = max(mt,t.cnt);
	 		}
	 	}
	 	else{
	 		for(int i = 0; i < arr.size(); i++){
	 			it = nums.find(arr[i]);
	 			if(it != nums.end()){
	 				nums.erase(it);
	 			}
	 		}
	 	}
	 } 

	 for(it = nums.begin(); it != nums.end(); it++){
	 	if((*it).cnt == mt) cout << (*it).value << " ";
	 }

	 return 0;


}

