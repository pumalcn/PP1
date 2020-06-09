#include <iostream>
#include <sstream>
#include <algorithm>
#include <stdlib.h>


using namespace std;

struct number
{
	int value;
	int cnt;
};

void split(string s, int * a, int & len){
	stringstream ss;
	ss << s;
	int x;
	len = 0;

	while(ss >> x){
		a[len] = x;
		len++;
	}
}

int find(int val, number * b, int &len){
	int res = len;
	for(int i = 0; i < len; ++i){
		if(b[i].value == val){
			res = i;
			break;
		}
	}
	return res;

}


bool f(number a, number b){
	if(a.value < b.value) return true;

	return false;
}

int main(){

	string line,nums_line,ans_line;
	getline(cin,line);
	int n = atoi(line.c_str());
	int arr[n];
	int len;
	int index = 0;
	int mt = 0;
	number nums[n];


	while(1){
		getline(cin, nums_line);
		if(nums_line == "HELP") break;
		split(nums_line,arr,len);
		getline(cin, ans_line);

		if(ans_line == "YES"){
			for(int i = 0; i < len; i++){
				int k = find(arr[i],nums,index);
				if(k < index){
					nums[k].cnt++;
				}
				else{
					nums[index].value = arr[i];
					nums[index].cnt = 1;
					index++;
				}
				mt = max(mt,nums[k].cnt);
			}
		}
		else{
			for(int i = 0; i < len; i++){
				int k = find(arr[i],nums,index);
				if(k < index){
					nums[k].cnt = -1000;
				}
			}
		}
	}


	sort(nums,nums + index,f);

	for(int i = 0; i < index; ++i){
		if(nums[i].cnt == mt){
			cout << nums[i].value << " ";
		}
	}
	return 0;
}