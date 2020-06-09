#include <iostream>
#include <sstream>
#include <algorithm>
#include <vector>
#include <stdlib.h>

using namespace std;


vector<int> split(string s){
	stringstream ss;
	vector<int> res;
	ss << s;
	int x;

	while(ss >> x){
		res.push_back(x);
	}
	return res;
}

int main(){
	string line,ans_line,nums_line;

	getline(cin,line);
	int n = atoi(line.c_str());

	int mt = 0;

	vector<int> nums;
	nums.push_back(0);

	for(int i = 1; i <= n; i++){
		nums.push_back(0);
	}

	while(1){
		getline(cin, nums_line);
		if(nums_line == "HELP") break;
		vector<int> arr = split(nums_line);// 1 2 3 4 5; 2 4 6 8 10;
		getline(cin,ans_line);

		for(int i = 0; i < arr.size(); ++i){
			if(arr[i] <= n){
				if(ans_line == "YES"){
					nums[arr[i]]++;//0 1 1 1 1 1 0 0 0 0 0 
				}else{
					nums[arr[i]] = -1000;// 0 1 -1000 1 -1000 1 -1000 0 -1000 0 - 1000  
				}
				mt = max(mt,nums[arr[i]]);// 1;
			}

		}
	}
	for(int i = 1; i <= n; i++){
		if(nums[i] == mt){
			cout << i << " ";
		}
	}
	return 0;

}