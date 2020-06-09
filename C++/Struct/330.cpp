#include <iostream>

using namespace std;



struct point 
{
	char a[50];
	char b[50];
	int x,y,z;
	double avr;

};


int main(){
	int n;
	cin >> n;
	point p[n];

	for(int i = 0; i < n; i++){
		cin >> p[i].a >> p[i].b >> p[i].x >> p[i].y >> p[i].z;
	}

	int mx = 0;

	for(int i = 0; i < n; i++){
		p[i].avr = (p[i].x + p[i].y + p[i].z)/n;
		if(mx < p[i].avr){
			mx = p[i].avr;
		}
	}

	for(int i = 0; i < n; i++){
		if(mx == p[i].avr){
			cout << p[i].a << " " << p[i].b << endl;
		}
	}

	return 0;
}