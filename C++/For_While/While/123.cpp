#include<iostream>

using namespace std;

int a,b,n;
int maxv,minv;
char maxl,minl;
int minKruzhka,maxKruzhka;


void init(){
	cin >> a >> b >> n;
    maxv = b;
    minv = a;
    minl = 'A';
    maxl = 'B';
    minKruzhka = 0;
    maxKruzhka = 0;
}

void calibrate(){
 	if(a > b){
 		swap(minv,maxv);
 		swap(minl,maxl);
 	}
}

bool tryfindFirstVariant(){
	if(minv == n){
		cout << ">" << minl << endl;
		//cout << "found 1st var min" << endl;
		return true;
	}
	else
	if(maxv == n){
		cout << ">" << maxl << endl;
		//cout << "found 1st var max" << endl;
		return true;
	}

	return false;

}

bool isPossible(){
	int cnt = 0;

	do{
     	maxKruzhka += minv;
     	cnt+=2;

     	if(maxKruzhka > maxv){
    		cnt+=2;
    		maxKruzhka = maxKruzhka - maxv;
     	}

	}while(cnt <=100000 && maxKruzhka != n);

	if(maxKruzhka == n){
     		return true;
    }

    return false;
}

bool tryfindSecondVariant(){
	minKruzhka = 0;
	maxKruzhka = 0;
	string operations = "";
	int cnt = 0;
	do{
     	operations = operations + '>' + minl  + '\n';
     	minKruzhka = minv;
     	cnt++;
     	operations = operations + minl +'>' + maxl +'\n';
     	maxKruzhka += minKruzhka;
     	cnt++;

     	if(maxKruzhka > maxv){
     		minKruzhka = maxKruzhka - maxv;
     		maxKruzhka = maxv;
			
			operations = operations + maxl +'>'+'\n';
     		maxKruzhka = 0;
    		cnt++;

			operations = operations + minl +'>' + maxl +'\n';
    		maxKruzhka = minKruzhka;
    		minKruzhka = 0;
    		cnt++;

     	}else{
     		minKruzhka = 0;
     	}

	}while(cnt <=100000 && maxKruzhka != n);

	if(maxKruzhka == n){
			cout << operations;
     		return true;
    }

    return false;
}

void solve(){
	if(!tryfindFirstVariant()){		
		if(!isPossible()){
			cout << "Impossible";
		}else{
			tryfindSecondVariant();
		}
	}
}

int main(){

    init();
    calibrate();
    solve();
    
	
	return 0;
}