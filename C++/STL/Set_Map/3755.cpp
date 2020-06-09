#include <iostream>
#include <set>
#include <sstream>
#include <algorithm>
using namespace std;


void f1(set<int>&a){
    for(set<int>::iterator it = a.begin(); it != a.end(); it++){
        cout << *it << " ";
    }
} 
void f2(set<int>&a,set<int>&b, set<int>&c){
    for(set<int>::iterator it = a.begin(); it != a.end(); it++){
        if(b.find(*it) == b.end()){
            c.insert(*it);
        }
    }
} 
int main(){
    int n, num;
    string answer;
    cin >> n;
    
    set <int> yes;
    set <int> no;
    stringstream ss;
    
    while(1) {
        ss.clear();
        getline(cin, answer);
        if(answer != "HELP" && answer != "YES" && answer != "NO") {
            ss << answer;
            continue;
        }
        if(answer == "HELP") break;
        if(answer == "YES") {
            while(ss >> num) {
                yes.insert(num);
            }
            continue;
        }
        if(answer == "NO") {
            while(ss >> num) {
                no.insert(num);
            }
            continue;
        }
    }
 
    set <int> result;
    set<int>::iterator it;

    f2(yes,no,result);
    
    f1(result);

    /*set_difference(yes.begin(), yes.end(), no.begin(), no.end(), inserter(result, result.begin()));
    for(it = result.begin(); it != result.end(); it++) {
        cout << *it << " ";
    }*/
    return 0;
}